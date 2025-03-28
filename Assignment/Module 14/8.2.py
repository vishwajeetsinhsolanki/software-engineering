#Write a Python program to create a calculator using functions.

def add(n1,n2):
    return n1+n2

def multi(n1,n2):
    return n1*n2

def sub(n1,n2):
    return n1-n2

def div(n1,n2):
    return n1/n2

def mod(n1,n2):
    return n1%n2


num1 = int(input("Enter number 1 : "))
num2 = int(input("Enter number 2 : "))

print("Select operation.\n")
print("1. Addition.")
print("2. Subtraction.")
print("3. Multiplication.")
print("4. Division.")
print("5. modules.")

choice = int(input("Enter your choice (1/2/3/4/5) : "))

if choice == 1:
    print(add(num1,num2))
elif choice == 2:
    print(sub(num1,num2))
elif choice == 3:
    print(multi(num1,num2))
elif choice == 4:
    print(div(num1,num2))
elif choice == 5:
    print(mod(num1,num2))
else:
    print("Invalid input!")
