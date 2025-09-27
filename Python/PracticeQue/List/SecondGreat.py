a = [] # user input
num = int(input("Enter number of elements in list : "))

for i in range(0,num):
    b = int(input(f"Enter {i} element of list : "))
    a.append(b)

max = 0
max2 = 0
index = 0
index2 = 0

for i in range(len(a)):
    if max < a[i]:
        max2 = max
        max = a[i]
        index2 = index
        index = i
    elif max2 < a[i]:
        max2 = a[i]
        index2 = i

print(f"Your 2nd greatest element is {max2} at index {index2}.")
