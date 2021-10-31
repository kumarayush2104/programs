shopt -s extglob
rm -- !(*.c|include|*.sh|Makefile)
shopt -u extglob
