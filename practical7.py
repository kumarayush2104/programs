lst = []
while(1):
	num = input("Enter number (enter exit to quit): ")
	if num=="exit": break;
	try:
		lst.append(int(num))
	except:
		print("Enter a valid number")
for i in lst:
