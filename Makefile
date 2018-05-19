ifndef DEBUG
# Default: compile for debug
DEBUG=1
endif
#PROFILE=1

CC = gcc

BASICFLAGS= -std=c11

DEBUGFLAGS=  -g 
OPTFLAGS= -g -finline -march=native -O3 -DNDEBUG

ifeq ($(PROFILE),1)
PROFFLAGS= -g -pg 
PLFLAGS= -g -pg
else
PROFFLAGS= 
PLFLAGS=
endif

INCLUDE_PATH=-I. 

CFLAGS= -Wall -D_GNU_SOURCE $(BASICFLAGS)

ifeq ($(DEBUG),1)
CFLAGS+=  $(DEBUGFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
else
CFLAGS+=  $(OPTFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
endif

LDFLAGS= $(PLFLAGS) $(BASICFLAGS)
LIBS=-lfl
FLEX=flex
BISON=bison

#------------------------------------------
# app
#------------------------------------------


C_PROG= ptucc ptucc_scan sample001
C_SOURCES= ptucc.c ptucc_scan.c cgen.c
C_GEN=ptucc_lex.c ptucc_parser.tab.h ptucc_parser.tab.c sample001.c

C_SRC= $(C_SOURCES) $(C_GEN)

C_OBJECTS=$(C_SRC:.c=.o)

.PHONY: all tests release clean distclean

all: ptucc_scan ptucc

ptucc: ptucc.o ptucc_lex.o ptucc_parser.tab.o cgen.o
	$(CC) $(CFLAGS) -o $@ $+ $(LIBS)

ptucc_scan: ptucc_scan.o ptucc_lex.o ptucc_parser.tab.o cgen.o
	$(CC) $(CFLAGS) -o $@ $+ $(LIBS)

ptucc_lex.c: ptucc_lex.l ptucc_parser.tab.h
	$(FLEX) -o ptucc_lex.c ptucc_lex.l

ptucc_parser.tab.c ptucc_parser.tab.h: ptucc_parser.y
	$(BISON) -d ptucc_parser.y

sample001: ptucc
	./ptucc < sample001.fl > sample001.c
	gcc -Wall -std=c11 -o sample001 sample001.c
	./sample001
	
sample002: ptucc
	./ptucc < sample002.fl > sample002.c
	gcc -Wall -std=c11 -o sample002 sample002.c
	./sample002
	
sample003: ptucc
	./ptucc < sample003.fl > sample003.c
	gcc -Wall -std=c11 -o sample003 sample003.c
	./sample003
	
sample004: ptucc
	./ptucc < sample004.fl > sample004.c
	gcc -Wall -std=c11 -o sample004 sample004.c
	./sample004
	
sample005: ptucc
	./ptucc < sample005.fl > sample005.c
	gcc -Wall -std=c11 -o sample005 sample005.c
	./sample005
	
sample006: ptucc
	./ptucc < sample006.fl > sample006.c
	gcc -Wall -std=c11 -o sample006 sample006.c
	./sample006
	
sample007: ptucc
	./ptucc < sample007.fl > sample007.c
	gcc -Wall -std=c11 -o sample007 sample007.c
	./sample007
	
sample008: ptucc
	./ptucc < sample008.fl > sample008.c
	gcc -Wall -std=c11 -o sample008 sample008.c
	./sample008

correct1: ptucc
	./ptucc < correct1.fl > correct1.c
	gcc -Wall -std=c11 -o correct1 correct1.c
	./correct1
	
correct2: ptucc
	./ptucc < correct2.fl > correct2.c
	gcc -Wall -std=c11 -o correct2 correct2.c
	./correct2

#-----------------------------------------------------
# Build control
#-----------------------------------------------------

distclean: realclean
	-touch .depend
	-rm *~

realclean:
	-rm $(C_PROG) $(C_OBJECTS) $(C_GEN) .depend *.o sample001.c sample001
	-rm .depend
	-touch .depend

depend: $(C_SOURCES)
	$(CC) $(CFLAGS) -MM $(C_SOURCES) > .depend
	
clean: realclean depend

include .depend

# Create release (courses handout) archive

release: clean-release-files tinyos2.tgz

clean-release-files:
	-rm tinyos2.tgz

TARFILES= cgen.c	cgen.h	Makefile  ptucc.c  ptucc_lex.l	\
  ptucc_parser.y ptucc_scan.c  ptuclib.h  sample001.fl \
  README.txt


ptuc_example.tgz: $(TARFILES)
	$(MAKE) distclean
	tar czvhf ptuc_example.tgz $(TARFILES)


