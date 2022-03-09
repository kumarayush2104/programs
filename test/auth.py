def main():
	choice = int(input("Enter 1 to register\nEnter 2 for login\n: "))

	if choice==1:
		name = input("Enter your name: ")
		tmp = open(name, 'w')
		pswd = input("Enter your password: ")
		tmp.write(pswd)
		print("Sucessfull")
	else:
		while(1):
			try:
				name = input("Enter your username: ")
				tmp = open(name, 'r')
				break
			except:
				print("Username Not found")
		pswd = input("Enter your password: ")
		if tmp.read() == pswd:
			print("Login Successful")
		else:
			print("\nLogin Failed\n")
			main()


main()
