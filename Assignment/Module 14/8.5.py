#Write a Python program to create a lambda function with two expressions.


res = lambda n1,n2 : (n1+n2 , n1*n2)

add,multi = res(10,50)

print(add)
print(multi)
