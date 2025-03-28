#Write a Python program to separate keys and values from a dictionary using keys() and values() methods.

d = {"name" : "raj" , "subject" : "python" , "marks" : 98}


print("keys of dictionary ")
for k in d.keys():
    print(k)

print("values of dictionary ")
for v in d.values():
    print(v)