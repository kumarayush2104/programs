def main():
	choice = int(input("Enter 1 to register\nEnter 2 for login\nEnter 3 to delete your account\n: "))

	if choice==1:
		name = input("Enter your name: ")
		if name=="exit": main()
		tmp = open(name, 'w')
		pswd = input("Enter your password: ")
		tmp.write(pswd)
		print("Sucessfull")
	elif choice==3:
		import os
		while(1):
			try:
				name = input("Enter your username: ")
				if name=="exit": main()
				tmp = open(name, 'r')
				break
			except:
				print("Username not found")
		pswd = input("Enter your password: ")
		if tmp.read() == pswd:
			os.remove(name)
			print("Account deleted\n")
		else:
			print("\nInvalid Password\n")
			main()
	elif choice==2:
		while(1):
			try:
				name = input("Enter your username: ")
				if name=="exit": main()
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
	else:
		return 1
main()
