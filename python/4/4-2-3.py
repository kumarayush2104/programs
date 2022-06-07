class father:
	title = "Father"
    
class mother:
    title = "Mother"
    
class child(father, mother):
    def display(self):
        print("This is child class")
        print("This is", father().title, "class")
        print("This is", mother().title, "class")
		
obj = child()
obj.display()