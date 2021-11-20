#!/bin/bash

shopt -s extglob
rm -vrf !(*.c|scripts)
shopt -u extglob
