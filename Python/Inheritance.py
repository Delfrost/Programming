class father:
    def __init__(self,name,lastname):
        self.name=name
        self.lastname=lastname
    def printname(self):
        print(self.name,self.lastname)

x=father("Anant"," Vijay")
x.printname()
class Son(father):
    def __init__(self, name, lastname):
        father.__init__(self,name, lastname)
x=Son("Jay","Dhwani")
x.printname()