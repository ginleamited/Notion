#!/bin/bash

gcc -g -o my_program my_program.c
valgrind --leak-check=full --track-origins=yes ./program
