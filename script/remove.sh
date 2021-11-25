#!/bin/bash

shopt -s extglob
rm -vr !(*.c|include|*.sh|Makefile|script|extras)
shopt -u extglob
