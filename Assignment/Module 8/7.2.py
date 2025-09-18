# Write a Python program to show multilevel inheritance.

class a():

    def displaya(self):
        print("A class.")

class b(a):

    def displayb(self):
        print("B class.")

class c(b):

    def displayc(self):
        print("C class.")

obj = c()
obj.displaya()
obj.displayb()
obj.displayc()