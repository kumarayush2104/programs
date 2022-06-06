import os

print("File System operations using os module\nfew methods of os module:")

print("1. os.getcwd(): getcwd= get current working directory\n", os.getcwd())

os.chdir("../")
print("\n\n2. os.chdir(dir): change directory, changing to upper folder \n", os.getcwd())


print("\n\n3: os.listdir(): list the files under current directory", os.listdir())


os.mkdir("hello")
print("\n\n4. os.mkdir(dir_name): make directory in CWD/PWD, creating a 'hello' folder ", os.listdir())

os.rename("hello", "bye")
print("\n\n5. os.rename(src, des): renames the directory , renaming  'hello' to 'bye' ", os.listdir())

os.rmdir('bye')
print("\n\n6. os.rmdir(dir_name): removes a directory , removing 'bye'", os.listdir())