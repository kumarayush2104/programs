import io

print("IO Modules and some brief discussions on it: ")
print("From what I understood so far, the io modules is used to tell python to consider python's own handle for specific things, like to store a string?, to store a byte?, open a file?, or any another operations where memory (aka RAM) is concerned.")
print("\nBut why we need to do such thing ?")
print("From my point of view, io module can be used for more secure operations in Python")
print("For example, you are opening a file in memory (aka RAM) directly or you are opening it in a buffer (assume buffer like a RAM, but at virtual level) ?? What do you think is more secure ?")
print("Obviously file opening in the upper level buffer is always secure. Since you are not touching the memory (aka RAM directly)")

print("Some methods of io module\n\n")
print("1. We can buffer some strings into the variable like:")
random = io.BytesIO(b"hello") # here 'b' is written intentionally
print("And print them like: ")
print(random.getvalue())

print("\n\n2. the open() method which we use in the python is also a io method which is used to open a file (refer 6-1-1.py for demonstration)") 

print("\n\ncheck 6-4-1.py for more.")

