print("Data hiding and private variable")

print("You know, what we mean by data hiding, what to do if we want to hide our data from other classes or outside of classes ?")

# "Literally" a normal class !!
class normal:
	var = "Is this data accessible from normal class?"
	def display(self):
		print(self.var)
		
# Creating an object of class normal
obj = normal()

# printing object's variable through both methods (inside class and outside class)
obj.display() #inside
print(normal().var) #outside



print("\n\n\n")

# Special class with special features  
class special:
    __var__ = "Is this data accessible from special class"
    def display(self):
        print(self.__var__)
		
# Creating an object of class special
obj = normal()

# printing object's variable through both methods (inside class and outside class
obj.display() #inside

print(normal().__var__) #outside
    
# You will see an error because we cannot class that variable from outside