#Practical Example 8: Write a Python program to check if a person is eligible to donate blood using a nested if.

age = int(input("Enter your age : "))
weight = int(input("Enter your weight : "))
disease = input("Do you have any disease ? (yes/no) : ").lower()



if disease == "no":
    if age>=18:
        print("you are eligible.")
    else:
        print("you are not eligible , minimum age required.")
    if weight>=45:
        print("you are eligible.")
    else:
        print("you are not eligible , minimum weight required.")
else:
    print("you are not eligible.")