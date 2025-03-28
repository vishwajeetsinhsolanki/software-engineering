# Write a Python program that uses a custom iterator to iterate over a list of integers.

l1 = [1,2,3,4,5]

res = iter(l1)

print(next(res))
print(next(res))
print(next(res))
print(next(res))
print(next(res))

"""
iterate using for loop
for i in res:
    print(i)
"""