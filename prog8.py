class staff:
	def __init__(self, name, age):
		self.name = name
		self.age = age
class teacher(staff):
	def __init__(self, name, div, age, sallery):
		self.div = div
		self.sallery = sallery
		super().__init__(name, age)
	def dis(self): print("Name:", self.name, "\nAge:", self.age, "\nDepartment:", self.div, "\nSallery:", self.sallery)

teacher1 = teacher("abcd", "B.tech CSE" , 30, 70000)
teacher1.dis()
