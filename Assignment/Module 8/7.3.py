# Write a Python program to show multiple inheritance.

class a():

    def displaya(self):
        print("A class.")

class b():

    def displayb(self):
        print("B class.")

class c(a,b):

    def displayc(self):
        print("C class.")

obj = c()
obj.displaya()
obj.displayb()
obj.displayc()