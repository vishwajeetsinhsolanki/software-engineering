# Write a generator function that generates the first 10 even numbers.

def gen_even():
    for i in range(1,21):
        if i%2==0:
            yield i

for i in gen_even():
    print(i)