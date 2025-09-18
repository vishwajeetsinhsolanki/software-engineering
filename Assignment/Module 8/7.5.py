# Write a Python program to show hybrid inheritance

class a():

    def displaya(self):
        print("A class.")

class b(a):

    def displayb(self):
        print("B class.")

class c(a):

    def displayc(self):
        print("C class.")

class d(b):

    def displayd(self):
        print("D class.")

B = b()
B.displaya()
B.displayb()

C = c()
C.displaya()
C.displayc()

D = d()
D.displayb()
D.displayd()