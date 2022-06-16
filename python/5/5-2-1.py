import re

print("Checking if the provided phone number is Indian")
condition = "^[+]91\d{10}$"

number = input("Enter phone number with country code: ")

x = re.match(condition, number)
if x:
    for i in re.findall(condition, number):
        print(i, end="")
    print(" is an Indian phone number !!")