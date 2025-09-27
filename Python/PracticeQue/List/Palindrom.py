a = []
num = int(input("Enter number of element in list : "))

for i in range(0,num):
    b = int(input(f"Enter {i} element of list : "))
    a.append(b)

rev = []
for j in range(len(a)-1,-1,-1):
    rev.append(a[j])

if rev == a:
    print("Your list is palindrom!")
else:
    print("Your list isn't palindrom!")