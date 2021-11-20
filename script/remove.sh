#!/bin/bash

shopt -s extglob
rm -vr !(*.c|include|*.sh|Makefile|script|test_pro)
shopt -u extglob
