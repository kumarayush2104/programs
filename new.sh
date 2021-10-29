clear
echo "New program number"
read name
echo "#include <stdio.h>" > program-$name.c
echo '#include "include/enroll.h"' >> program-$name.c
echo "" >> program-$name.c
echo "main() {" >> program-$name.c
echo "        enroll();" >> program-$name.c
echo "}" >> program-$name.c
nano program-$name.c


