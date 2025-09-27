import math
def cal(a,b):
    c = math.sqrt((a**2) + (b**2))
    return c

a = 6
b = 8
c = cal(a,b)
print(f"The hypotenuse of triangle with sides {a} and {b} is: {c}")