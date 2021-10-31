clear
echo "Enter full name of custom program"
read name
gcc $name.c -o $name
./$name
rm -rf $name
