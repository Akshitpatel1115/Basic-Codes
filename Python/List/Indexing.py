 # list --> Whenever we write something in [] it's call list.List are varsatile and mutable.


a = [10,20.5,30,40.5,"hello"]

# we can store any type of data in list that's why list is versatile
print(type(a))
print(a)

# Mutable --> means wwe can change value from anywhere
a[1] = 20
print(a)

# index start from 0
for i in a:
    print(i)