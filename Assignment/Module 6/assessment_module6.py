"""
Create a mini-project where students combine conditional statements, loops, and functions to create a basic Python application, such as a simple calculator or a grade management system.
"""
def per():
    ans = ((science+physics+maths+english)/400)*100
    return ans
def total():
    t_mark = science+physics+maths+english
    return t_mark

def grade():
    percentage = per()
    if percentage <= 100 and percentage >=81 : 
        return "Grade A."
    elif percentage <=80 and percentage >=61:
        return "Grade B."
    elif percentage <=60 and percentage >=41:
        return "Grade C."
    elif percentage <=40 and percentage >=33:
        return "Grade D."
    else:
        return "Fail."

status = True
l_totalmarks = []
l_percentage = []
l_grade = []
l_name = []

while status :
    name = input("Enter student name : ").title()
    print("Enter subject marks")
    maths = int(input("Enter maths marks : "))
    science = int(input("Enter science marks : "))
    physics = int(input("Enter physics marks : "))
    english = int(input("Enter english marks : "))

    if 0<=maths<=100 and 0<=science<=100 and 0<=physics<=100 and 0<=english<=100:
        l_totalmarks.append(total())
        l_percentage.append(per())
        l_grade.append(grade())
        l_name.append(name)

        choice = input("\nDo you want to enter more student details? press 'y' for yes and 'n' for no : ").lower()

        if choice == "y" or choice == "yes":
            status = True
        else:
            print()
            for i in range(len(l_name)) :
                print(f"=========={l_name[i]}'s Details=========")
                print(f"Total marks : {l_totalmarks[i]}")
                print(f"Percentage : {l_percentage[i]}%")
                print(f"Grade : {l_grade[i]}")
                print()
            status = False
    else:
        print("Invalid marks")
        break