a = []
num = int(input("Enter number of element in list : "))

for i in range(0,num):
    b = int(input(f"Enter {i} element of list : "))
    a.append(b)

x = set(a)

print(f"There are {len(x)} elements in list of a , And list is : {a}.")