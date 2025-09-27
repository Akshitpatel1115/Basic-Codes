# variable
a = 12
b = 43
c = 44
d = 10

print(a+b+c+d,"\n")

# How to get data type
name = "akshit"  # string
name2 = 'akshit' # string
age = -19  # integer
price = -2000.00  # float
x = 23j  # complex (j is imaginary value)
y = True  # boolean  (T must be capital)
z = False  # boolean (F must be capital)

print(type(name))
print(type(name2))
print(type(age))
print(type(price))
print(type(x))
print(type(y))
print(type(z),"\n") 

# Type casting / Type conversion

# --> srting TO int
value = "19"
print(value,type(value))

value = int(value)
print(value,type(value),"\n")

# --> int TO float
f = 39
print(f,type(f))

f = float(f)
print(f,type(f),"\n")

#  --> int TO boolean
bol = 1
print(bol,type(bol))

bol = bool(bol)
print(bol,type(bol),"\n")

# --> string TO boolean
bol = ""  # We can also use None,False,0,0.0 (falsy value)
bol = bool(bol)

print(bol,type(bol),"\n")

# --> float TO int
f = 34.67
print(f,type(f))

f = int(f)
print(f,type(f),"\n")

# --> int TO string
value = 45
print(value,type(value))

value = str(value)
print(value,type(value))