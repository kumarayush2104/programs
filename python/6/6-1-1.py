print("\nOpening a file in write mode")
fopen = open("file.txt", "w")

print("\nWriting some string into it: ")
fopen.write("Hello Python")

print("\nClosing the file:")
fopen.close()

print("\nOpening the file in read mode")
fopen = open("file.txt", "r")

print("\nreading file contents")
print(fopen.read())

print("\nclosing the file")
fopen.close()

print("also remember:-\nfile.readlines(): creates a list containing lines of the whole file (detects \\n for breaking)\
\nfile.readline(): reads a single line from file and shift the cursor to next line\
\nfile.seek(): Used for adjusting the cursor of file\
\nfile.tell(): tells us the position of cursor.")

