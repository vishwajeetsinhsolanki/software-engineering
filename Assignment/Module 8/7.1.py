# Write a Python program to show single inheritance.

class a():

    def displaya(self):
        print("A class.")

class b(a):

    def displayb(self):
        print("B class.")

obj = b()
obj.displaya()
obj.displayb()