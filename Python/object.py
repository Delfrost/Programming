class Person:
    def __init__(self,name,age):
        self.note=name
        self.age=age
    def __str__(self):
        return f"{self.note},{self.age}"
p1 = Person("Jack",25)
print(p1)