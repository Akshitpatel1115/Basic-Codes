# Upper
a = "patel akshit"
print(a.upper())

# Lower
b = "HELLO WORLD"
print(b.lower())

# one str copy in another
a = b
print(a)

# leagth
print(len(a))

# Reverse 
c = "Father"  # also do with this ---> print(a[::-1]) -- it also use for reverse string
x = len(c)
d = '' # d use for storing reverse string
for i in range(x-1,-1,-1):
    d = d + c[i]
  
print(d)