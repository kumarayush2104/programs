import io

print("IO Modules and some brief discussions on it: ")
print("From what I understood so far, the io modules is used to tell python to consider python's own handle for specific things, like to store a string?, to store a byte?, open a file?, or any another operations where memory (aka RAM) is concerned.")

print("Some methods of io module\n\n")
print("1. We can buffer some strings into the variable like:")
random = io.BytesIO(b"hello") # here 'b' is written intentionally
print("And print them like: ")
print(random.getvalue())

print("\n\n2. the open() method which we use in the python is also a io method which is used to open a file (refer 6-1-1.py for demonstration)") 

print("\n\ncheck 6-4-1.py for more.")

