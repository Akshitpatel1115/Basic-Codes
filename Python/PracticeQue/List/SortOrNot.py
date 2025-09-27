# user input
a = []
num = int(input("Enter number element in list : "))

for i in range(0,num):
    b = int(input(f"Enter {i} element of list : "))
    a.append(b)

# check list sort or not
for j in range(len(a)-1): # not requied last element thats why we do len(a)-1
    if a[j] <= a[j+1]:
        continue
    else:
        print("Your list isn't sorted!")
        break
else:
    print("Your list is sorted!")