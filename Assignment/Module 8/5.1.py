# Write a Python program to handle exceptions in a simple calculator (division by zero, invalid input).

try:
    n1 = int(input("Enter number 1 : "))
    n2 = int(input("Enter number 2 : "))

    print("subtraction : ",n1-n2)
    print("division : ",n1/n2)
    print("addition : ",n1+n2)
    print("multiplication : ",n1*n2)


except ZeroDivisionError:
    print("Cannot divide by zero.")

except ValueError:
    print("Invalid input.")