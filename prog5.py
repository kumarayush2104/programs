ls1 = []
ls2 = []

print("\nList 1")
while 1:
	var = input("Enter content of list 1 (enter 'exit' to quit): ")
	if var == 'exit':
		break
	else:
		ls1.append(var)
print("\nList 2")
while 1:
	var = input("Enter content of list 2 (enter 'exit' to quit): ")
	if var == 'exit':
		break
	else:
		ls2.append(var)

print("\n\nContents of List 1: ")
for i in ls1:
	print(i)

print("\n\nContents of List 2: ")
for i in ls2:
	print(i)
lsc = ls1 + ls2
lsc.sort()
print("\n\n")
for i in lsc:
	if (lsc.count(i)) == 1:
		lsc.remove(i)
		continue
	print("'" + str(i) + "' Occurred " + str(lsc.count(i)) + " times.")
	for j in range(lsc.count(i)):
		lsc.remove(i)

