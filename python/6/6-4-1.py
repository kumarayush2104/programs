from ctypes import sizeof
import io
from sys import getsizeof
 
print("Just like an example from 6-4-0, here we have a io.StringIO which handles string i/o")

print("\n\nHere we create a string buffer with initial size")
string = io.StringIO("Hello Python")


print("\nLets print its content")
print(string.getvalue())

print("\nLets overwite with something smaller than its size.")
string.write("Bye")

print("\nLets print its content again")
print(string.getvalue())

print("\nAs you can see, it did overwrite the previous value, but not fully")
print("\nLets try overwriting it again")
string.write("This is a buffer")

print("\nPrinting its content again: ")
print(string.getvalue())

print("\nYou can see the oldest data is fully overwritten but the previous data, but now you have Bye+This is a buffer")

print("So How do we clear the string to write new stuff ?")
string.truncate(0) # We can use io.truncate without a parameter, but it will flush its data from the cursor instead of from beginning, with io.truncate(0) we shifted the cursor to the beginning of the stream !
print(string.getvalue())
print("\nCan tou see a empty line now ? Lets fill it up for the last time.")
string.write("This is my new content")
print(string.getvalue())
print("\nSo now we will close the stream by: ")
string.close()
print(string.getvalue())
print("You will get an intentional error !! Since we are calling a closed buffer")
