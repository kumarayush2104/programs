print("Loops in Python: \n\n")

print("'For' loop:\n\n")
print("Syntax: for (var) in (Iterable)")

print("example 1:")
for i in range(10):
    print(i)

print("\n\nexample 2:")
for i in range(-1, 10):
    print(i)

print("\n\nexample 3:")
for i in range(10, 0, -1):
    print(i)

print("\n\nexample 4:")
print("Print a list: ")
lst = [ 1,2,3,4,54,3,5,6,7,8,5]
for i in lst:
    print(i)
else:
    print("Program ended")

print("'white' loop:\n\n")
print("Syntax: while(condition) ")

print("\n\nexample-1:")
num = 0 
while(num==10):
    print("Working")
    num += 1

print("\n\nexample-2:")
num = int(input("Enter any of the them (0,1,-1): "))

while num:
    print("Infinite times")
else:
    print("Single time")


print("\n\n\nSpecial Keywords")
print("break: used to break a loop, example: ")

while 1:
    if (input("Enter 90 to break: ")==90):
        break

print("\n\n\nContinue: used to continue (avoid) the arguments below this keyword and rerun the iteration, example: ")
for i in (1,2,3,4,5,6,7,8,9,10):
    if(i%2!=0):
        continue
    print(i, "is an even number")

print("\n\npass: as we know, it is compulsory to add a statement in the body of loops, if, classes, functions, incase we do not need that function to do anything, we can just simply add 'pass' keyword, example: ")
if(1):
    pass
