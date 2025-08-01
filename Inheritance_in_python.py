class Animal:
    def speak(self):
        print("I can make sounds")

class Dog(Animal):  # Inheriting from Animal
    def bark(self):
        print("I can bark")

d = Dog()
d.speak()   # from parent class
d.bark()    # from child class
