class base:
    def display(self):
        print("base")

class derived(base):
    def display(self):
        print("derived")

obj = derived()
obj.display()
