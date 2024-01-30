from abc import ABC,abstractmethod
class Animal(ABC):

    @abstractmethod
    def sound(self):
        pass
    @abstractmethod
    def move(self):
        pass
class Cat(Animal):
        def sound(self):
            print("Meow")
        def move(self):
            print("cat is running")
class Dog(Animal):
        def sound(self):
            print("Bow")
        def move(self):
            print("Dog is running")
cat=Cat()
cat.sound()
cat.move()

dog =Dog()
dog.sound()
dog.move()




