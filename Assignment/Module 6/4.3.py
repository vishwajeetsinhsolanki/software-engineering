#Practical Example 7: Write a Python program to calculate grades based on percentage using if-else ladder.

marks = int(input("Enter your marks : "))

if marks>80:
    print("A grade.")
elif 60<marks<=79:
    print("B grade.")
elif 40<marks<=59:
    print("C grade.")
else:
    print("faile.")