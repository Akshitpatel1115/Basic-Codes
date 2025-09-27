a = [] # normal list
num = int(input("Enter number of elemenet in list : "))
x = [] # reverse list

for i in range(0,num):
    b = int(input(f"Enter {i} element of list : "))
    a.append(b)

for j in range(len(a)-1,-1,-1):
    x.append(a[j])

print(x)