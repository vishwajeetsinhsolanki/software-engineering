#Write a Python program to create a parameterized function that takes two arguments and prints their sum.

def fun(n1,n2):
    sum = n1 + n2
    return sum

num1 = int(input("Enter number 1 : "))

num2 = int(input("Enter number 2 : "))

print(fun(num1,num2))