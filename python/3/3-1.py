print("If statements\n\n")


print("Example 1: ")
num = int(input("Enter your num: "))

if num%2==0:
    print(num,"is an even number")
else:
    print(num, "is an odd number")



print("\n\nExample 2: ")
num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: "))

if(num1 > num2):
    print(num1, "is largest")
elif(num2 > num1):
    print(num2, "is largest")
else:
    print(num1, "is equal to", num2)


print("\n\nExample 3:")
num = int(input("Enter any of the them (0,1,-1): "))

if num:
    print("It is running")
else:
    print("Not running")