# Write a Python program to show method overriding.

class name:
    def nam(self):
        print("name : raj patel")

class subject(name):
    def nam(self):
        super().nam()
        print("subject : python")

details = subject()

details.nam()