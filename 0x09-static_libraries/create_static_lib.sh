#!/bin/bash
gcc -c *.c
ar rc libali.a *.o
ranlib libali.a

