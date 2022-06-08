## First we will use try except to check if the user is entering a numeric or not !!

while 1:
    try:
        age = input("Enter your age: ")
        int(age)
    except:
        print("Please enter a valid number !")
    else:
        if(int(age)<0):
            raise Exception("Enter a valid a age !!")
        else:
            print("Your age is", age)
            break

		
## above loop will run till, it catches a numeric value !

# Using raise statement we will check if user is using a positive or negative integer as age, as you know age can't be a negative number

## Try running program, and provide positive, negative and alphabets to check if its working !
