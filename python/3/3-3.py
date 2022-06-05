print("Functions in python\n\n")

print("How to define a function:  def fun_name(parameters)\nexample: ")

def sum(num1, num2):
    print(num1+num2)
sum(10, 11)

print("\n\nDeclaring default values in function\nexample: ")

def mul(num1=1, num2=1):
    print(num1*num2)
mul(2,4)
mul(90)


print("\n\nDeclaring Lambda functions with default values declaration\nexample: ")
div = lambda num1=1, num2=1:  print(num1/num2)
div(12, 3)
div(12)

print("\n\nDeclaring Arbitary functions\nexample: ")

def max(*lst):
    large = lst[0]
    for i in lst: 
        if i > large: large = i
    print(large, "is the largest number.")
max(1,2,4,5,6,7,4,2,2,45,6)

print("\n\nFunctions doc string: Provides a description to a function or class.\nexample: ")

def min(*lst):
    '''This Functions prints the minimum numbers among the provided elements'''
    small = lst[0]
    for i in lst: 
        if i < small: small = i
    print(small, "is the largest number.")

print(min.__doc__)

print("\n\nFunction annotation: Used to define the arguments.\nExample: ")
def ageVerify(age: int):
    if(age>=18): print("Ok")
    else: print("not Okay")
print(ageVerify.__annotations__)

