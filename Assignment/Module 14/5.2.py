#Write a Python program to access alternate values between index 1 and 5 in a tuple.

t1 = (1,2,3,4,5,6,7,8,9)

for i in range(t1[1],t1[5]):
    if i%2 != 0 :
        print(i)