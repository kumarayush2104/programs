class University:
	uni_name = "UTU"

class amtics(University):
	institute_name = "AMTICS"

class sem1(amtics):
	sem = "First Semester"
	def details(self, name):
		print("Name:", name)
		print("Sem:", self.sem)
		print("College:", self.institute_name)
		print("University:", self.uni_name)

obj1 = sem1()
obj1.details("Darwin")
