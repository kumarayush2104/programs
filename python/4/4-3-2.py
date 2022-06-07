## Method Overloading


class Student:
	def bio(self, name, age, special_talent):
		print("Name:", name)
		print("Age:", age)
		print("Special Talent: ", special_talent)

## So here we have a student class, with 3 inputs name, age and talent
# Is it possible for every student to have any special talent ??
# What if I don't have any special talent ??


#stu1 = Student()
#stu1.bio("Michael", 19) ## running this thing will surely give you an error

## But dont be sad Michael, we have method over-loading for you

## Let's see how it works

class StudentBetter:
	def bio(self, name, age, special_talent=None): ## name and age are required !!, but special_talent have default value (for default value refer (3/3-3.py)
		print("Name:", name)
		print("Age:", age)
	## these two will print everytime, no matter if you have talent or not
		if(special_talent==None):
			pass
		else: # Adding a check, when we dont want to print special talent !!
			print("Special Talent: ", special_talent)


## So here we have another student class but better version, lets try it !


student1 = StudentBetter()
student1.bio("Michael", 19) ## We are commenting the above code to make this thing work !!
print("\n\n")
student2 = StudentBetter()
student2.bio("Alex", 19, "Can Sing") # Another Studemt but with some talent

## these thing will work as expected !!, this is how method overloading works !!
