# Write a Python program to show hierarchical inheritance.

class a():

    def displaya(self):
        print("A class.")

class b(a):

    def displayb(self):
        print("B class.")

class c(a):

    def displayc(self):
        print("C class.")

B = b()
B.displaya()
B.displayb()

C = c()
C.displaya()
C.displayc()