# Write a Python program to demonstrate the use of local and global variables in a class.

name1 = "Jay Patel"

class Student:
    def display(self):
        name2 = "Raj Patel"
        print(f"global : {name1}")
        print(f"local : {name2}")

obj = Student()

obj.display()
