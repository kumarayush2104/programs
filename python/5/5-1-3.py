## LBYL

def divide(num1, num2):
	if(num2==0): ## Checked the exceptions before running the actual division
		print("Division by 0 is not supported !")
	else:
		print(num1/num2)


# EAFP

def divide2(num1, num2):
	try: ## Running the actual division first and then check for exceptions !!
		print(num1/num2)
	except:
		print("Division by 0 is not supported !")