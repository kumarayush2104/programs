## Example of over-riding

class parent:
	def method(self, name): # Parent's method take name and print it
		print("Name:", name)

class child(parent):
	def method(self, age): # child's method takes age and print it
		print("Age:", age)


## How will you know, which one is running ??, Let's try it

object = child()
object.method("William")

## After running you will sense its not correct
## Over-riding prefers the method which is closer to it, like
# Like you are creating child's object amnd child's method will be closer to it, than parent's
# Thats why the child's method is running

# How you will run, parent's method, will see in 4-3-3.py


