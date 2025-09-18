# Write a Python program to write multiple strings into a file.


f = open("m1.txt","w")

for i in range(1,4):
    a = input("Enter string : ")
    f.write(a + "\n")

f.close()

