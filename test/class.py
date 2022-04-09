class sample:
	x=2
	def get(self, y):
		self.y = y

s1 = sample()
s1.get(3)
print(s1.x, s1.y)
s2=sample()
s2.y=4
print(s2.x, s2.y)
