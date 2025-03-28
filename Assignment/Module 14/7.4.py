#Write a Python program to convert two lists into one dictionary using a for loop.

l1 = [1,2,3,4,5]

l2 = ['a','b','c','d','e']

d = {}

for i in range(len(l1)) :
    d[l1[i]] =l2[i]

print(d)