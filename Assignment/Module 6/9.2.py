#Write a Python program that manipulates and prints strings using various string methods.
str = "tops technologies"

print(str)
print(len(str))
print(str.lower())
print(str.upper())
print(str.capitalize()) 
print(str.title())
print(str.strip())
print(str.replace('tops','down'))
print(str.find("e"))
print(str.startswith("t"))
print(str.endswith("s"))
s1 = str.split()
print(s1)
print("-".join(s1))
print("abc".isalpha())
print("465".isdigit())
print("as45".isalnum())
no = "456"
print(no.zfill(10))