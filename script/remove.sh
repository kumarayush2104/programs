#!/bin/bash

shopt -s extglob
rm -v !(*.c|include|*.sh|Makefile|script)
shopt -u extglob
