#!/bin/bash

shopt -s extglob
rm -vrf !(*.c|scripts|Makefile)
shopt -u extglob
