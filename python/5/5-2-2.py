import re

print("Checking for names containing 'a' in beginning and ending")
listOfnames = ["Ayush", "Balkrishna", "Dhruv", "Jeel", "Neel", "Virendra", "Alia"]

for i in listOfnames:
    if (re.match("^A|\w.*a$", i)):
        for j in i:
            print(j, end="")
        print("\n")