class student:
	__student_cgpa=9.2
	def display(self):
		print("The Student CGPA is: ", self.__student_cgpa)

s = student()
s.display()
print("The student cgpa is: ", s.__student_cgpa)

