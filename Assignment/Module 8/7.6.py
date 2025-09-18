# Write a Python program to demonstrate the use of super() in inheritance.
class A:
    def displaya(self):
        print("A class.")

class B(A):
    def displayb(self):
        print("B class.")

class C(B):
    def displayb(self):
        super().displayb()
        print("C class.")

c = C()


c.displayb()