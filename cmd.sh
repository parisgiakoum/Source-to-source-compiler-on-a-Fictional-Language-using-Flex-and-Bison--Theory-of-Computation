#!/bin/bash
flex fl_lex.l
gcc lex.yy.c -lfl
./a.out < tester.in