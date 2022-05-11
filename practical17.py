class main:
    greet = "Hello"
    __classname= "Main class"
    def dis(self):
        print(self.greet, self.__classname)


obj1 = main()
obj1.dis()
print(obj1.greet, obj1.__classname)