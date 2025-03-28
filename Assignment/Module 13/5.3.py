#Practical Example 3: Write a Python program to find a specific string in the list using a simple for loop and if condition.


list1 = ["apple","banana","mango"]

str = input("Enter your string to find : ")

for i in list1:
    if str == i:
        print("available")
        break
    else:
        print("not available")
        break