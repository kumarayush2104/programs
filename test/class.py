class Program:
	def __init__(self, name, age):
		self.name = name
		self.age = age

p2 = Program("Ayush", 19)
print(p2.name + "'s Age is " + str(p2.age))
