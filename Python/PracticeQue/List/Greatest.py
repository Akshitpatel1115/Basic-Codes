a = [] # user input
num = int(input("Enter number of elements in list : "))

for i in range(0,num):
    b = int(input(f"Enter {i} element of list : "))
    a.append(b)

max = 0
index = 0
for i in range(0,len(a)):
    if max < a[i]:
        max = a[i]
        index = i

print(f"Your max element is {max} at index value {index}.")
