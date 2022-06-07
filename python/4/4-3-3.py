##  I hope, you are here after reading previous 2 files !!

# So in 4-3-1.py, what if you want to parent's method, for that will use, method overloading

## Yeah you guessed it right, method overloading and method overwriting both in same program !!

class parent:
        def method(self, name):
                print("Name:", name)

class child(parent):
	def method(self, age, chcker=None): ## Adding a checker to check when we want to parent;'s method
		if(chcker==None):
			print("Age:", age)
		else:
			parent().method(age)


object = child()
object.method("William", 1)
## In this case I am  passing an arg, so i want to run parent's method

# In output you will it calls the parent class
# Lets try again with no args
object.method(19)

## Now they are working as expected !!
