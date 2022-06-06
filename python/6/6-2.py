print("\n\nFile operation (Binary) in python")


print("Writing in binary mode (use wb as mode)")
fopen = open("file.bin", "wb")
fopen.write(b"Hello Python")
fopen.close()

print("\n\nReading in binary mode (use rb as mode)")
fopen = open("file.bin", "rb")
print(fopen.read())

print("If you see a 'b' before your content, its fine because it denotes it is a binary data.")