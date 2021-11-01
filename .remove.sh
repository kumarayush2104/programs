shopt -s extglob
rm -v !(*.c|include|*.sh|Makefile)
shopt -u extglob
