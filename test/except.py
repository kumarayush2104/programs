import sys

def main():
	try:
		x = input("Enter a number to double it: ")
		if x=="exit": return 0
		print(int(x)*2)
		main()
	except:
		print("Enter a valid number")
		print("Error type: ", sys.exc_info()[0])
		main()

main()
