import re

print("Regular Expressions in python")
print("Regular expressions parses string in requested format, like we can use it in validating the inputs (like we did in HTML Forms)")


print("\n\nCondition 1: Checking if the string has only numbers ??")

condition = "[0-9]" #only digits

string = "Hello World" #only alphabets
string2 = "1234566090" #only numbers
string3 = "Mix 123" #Mixture of numbers and alphabets


print(re.findall(condition, string), "Returns none, because it doesn't contain numbers")
print(re.findall(condition, string2), "Returns a reference of Matched object, which means in matched")
print(re.findall(condition, string3), "Returns only Matched characters !!")


print("\n\nCondition 2: Checking of string which contains numbers and alphabets but no special characters")

condition = "[0-9a-zA-Z]" #For numbers and alphabets

string = "Hello World"
string2 = "Hello world1234"
string3 = "hello+-1234"


print(re.findall(condition, string))
print(re.findall(condition, string2))
print(re.findall(condition, string3))


print("\n\nCondition 3: Checking for special characters and white space in the string")

condition = "[^0-9a-zA-Z]" # Negative Match !!

print("We are using strings declared above")

print(re.findall(condition, string))
print(re.findall(condition, string2))
print(re.findall(condition, string3))

print("\n\nCondition 4: Checking for only certain characters !!")

condition = "[on]" # This will return o and n

string = "Hello Python"
string2 = "Hell python1234"
string3 = "+-1234"

print("Returns the index where the condition's first occurance")
x=re.search(condition, string)
y=re.search(condition, string2)
z=re.search(condition, string3)

if x: print(x.start())
if y: print(y.start())
if z: print(z.start())

print("\n\n\nFor more complex examples check 5-2-*.py series !!")

