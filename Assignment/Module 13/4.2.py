#Practical Example 6: Write a Python program to check if a number is prime using if_else.

num = int(input("enter number : "))

status = True

for i in range(2,num):
    if num % i == 0:
        status = False
        break
if status:
    print("prime")
else:
    print("not prime")
