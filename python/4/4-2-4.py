class Parent:
	title = "Parent"
      
class child1(Parent):
    def display(self):
        print("This is child1 class")
        print("This is", super().title, "class")

class child2(Parent):
    def display(self):
        print("This is child2 class")
        print("This is", super().title, "class")

class child3(Parent):
    def display(self):
        print("This is child3 class")
        print("This is", super().title, "class")
		
obj = child1()
obj.display()
print("\n\n")
obj = child2()
obj.display()
print("\n\n")
obj = child3()
obj.display()