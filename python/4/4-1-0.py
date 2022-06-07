print("Introduction to OOP\n\n")
print("Read 4-1-0.py and 4-1-1.py content for basic intialization of a class")


# intialization of a class
class Student:
	def say(self, name): # adding a method in class   |||  "name" is an instance variable 
		print("Your name is", name)
		

# creating a variable of type Student
name1 = Student()

# Calling its one of the functions !!
name1.say("Jack")


