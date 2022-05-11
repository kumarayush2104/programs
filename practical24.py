# B.Tech Computer Science and Engineering
# Ayush Kumar
# 202103103510253

fileName = input("Enter Filename: ")
file = open(fileName, "r")
lines = file.readlines()
print(len(lines))
opr = input("Enter Number of lines to be printed: ")

for i in range(int(opr)+1):
	print(lines[i])

