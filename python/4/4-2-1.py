class parent:
	def display(self):
		print("This is parent class")
		
class child(parent):
	def display(self):
		print("This is child class")
		super().display()
		
obj = child()
obj.display()