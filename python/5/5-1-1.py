## Opening a file through with statement !

with open("file.txt", "w") as fopen:
    fopen.write("Hello Python")

with open("file.txt", "r") as fopen:
    print(fopen.read(), "\n\n")
    
    
## We cannot read the fopen outside the scope !!, this line will throw an error !!
fopen.read()