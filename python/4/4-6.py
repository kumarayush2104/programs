# Class as Decorators !!

class decorator:
	def __init__(self, function):
		self.function = function
	def __call__(self):
		# Decorating this function xD
		print("-------------------------------")
		self.function()
		print("-------------------------------")


@decorator
def function():
	print("Did you see any decorations ??")

function()
