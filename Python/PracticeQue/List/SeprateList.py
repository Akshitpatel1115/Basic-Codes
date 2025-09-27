a = [] # user input list
num = int(input("Enter number of elements in list : "))

for i in range(0,num):
    b = int(input(f"Enter {i} element of list : "))
    a.append(b)

posi = []
negi = []

for i in a:
    if i >= 0:
        posi.append(i)
    else:
        negi.append(i)

print(f"Positive list : {posi}")
print(f"Negative list : {negi}")
