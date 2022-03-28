ls1 = []
ls2 = []

print("\nList 1")
while 1:
	var = input("Enter content of list 1 (enter 'exit' to quit): ")
	if var =='exit':
		break
	else:
		ls1.append(var)
print("\nList 2")
while 1:
        var = input("Enter content of list 2 (enter 'exit' to quit): ")
        if var =='exit':
                break
        else:
                ls2.append(var)

print("\n\nContents of List 1: ")
for i in ls1:
	print(i)

print("Contents of List 2: ")
for i in ls2:
	print(i)
