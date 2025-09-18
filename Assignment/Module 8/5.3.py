# Write a Python program to handle file exceptions and use the finally block for closing the file.
try:
    
    name = input("Enter file name : ")
    f = open(name,"w")

    for i in range(1,4):
        a = input("Enter string : ")
        f.write(a + "\n")
    

except FileNotFoundError:
    print("file not found!!")

finally:
    f = open(name,"r")
    print(f.read())
    f.close()
    print("file closed.")