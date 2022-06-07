class College:
	university_name = "utu" ## Class Variable
	
	def amtics(self, name):
		college_name = "AMTICS" ##  Instance variable of amtics
		print("Your name is", name)
		print("College:", college_name)
		print("University:", self.university_name)
		
		
	def cgpit(self, name):
		college_name = "CGPIT" ##  Instance variable of cgpit
		print("Your name is", name)
		print("College:", college_name)
		print("University:", self.university_name)


name1 = College()
name1.amtics("Jack")
print("\n\n")
name2 = College()
name2.cgpit("Sam")


