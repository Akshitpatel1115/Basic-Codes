n = int(input("Enter number = "))
print(f"All the fector of {n} are : ")
for i in range(1,n+1):
    if n % i == 0:
        print(i,end = " ")