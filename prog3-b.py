import os

# main
fp = open("file.txt", "w")
while 1:
    try:
        num = input("Enter number (use any alphabet to quit the loop): ")
        int(num)
        fp.write(num + "\n")
    except ValueError:
        break


# func
def func(file):
    file.close()
    file = open("file.txt", "r")
    lst = file.readlines()
    large = int(lst[0])
    small = int(lst[0])
    os.remove('file.txt')
    for i in range(len(lst)):
        if large < int(lst[i]):
            large = int(lst[i])
        elif small > int(lst[i]):
            small = int(lst[i])
    return "Largest Number: " + str(large) + "\nSmallest Number: " + str(small)


# calling from main
print(func(fp))
