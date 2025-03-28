#Write a Python program to count how many times each character appears in a string.

s1 = "vishwajeetsinh"
d = {}
for i in s1:
    d[i] = s1.count(i)
print(d)