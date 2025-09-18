# Write a Python program to show method overloading.

from pickle import OBJ


class A:
    def display(self):
        print("Class A")
    
class B(A):
    def display(self):
        print("class B")

obj = B()
obj.display()