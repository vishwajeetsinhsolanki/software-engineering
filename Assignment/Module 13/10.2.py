# Write a Python program that uses reduce() to find the product of a list of numbers.
from functools import reduce

l1 = [1,2,3,4,5]

multi = reduce(lambda n1,n2 : n1*n2 , l1)

print(multi)