# Write a Python program to demonstrate handling multiple exceptions.

try:
    n1 = int(input("Enter number 1 : "))
    n2 = int(input("Enter number 2 : "))

    ans = n1/n2

    print(ans)

except ZeroDivisionError:
    print("Cannot divide by zero.")

except ValueError:
    print("Invalid input.")