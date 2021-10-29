clear
echo "Enter number of the program"
read name
gcc program-$name.c -o program-$name
./program-$name
#rm -rf program-$name
