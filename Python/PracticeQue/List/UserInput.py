# only number input
a = []
num = int(input("Enter number of elements in list : "))

for i in range(0,num):
    b = int(input(f"Enter {i} element of list : "))
    a.append(b)

print(a)

# string user input
str = input("Enter string and sparate by spaces : ").split()
print(str)
