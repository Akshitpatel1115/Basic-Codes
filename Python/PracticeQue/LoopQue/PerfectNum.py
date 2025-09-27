num = int(input("Enter a number = "))
sum = 0
for i in range(1,num):
    if num % i == 0: 
        sum = sum + i
if sum == num:
    print(f"{num} is perfect number!")
else:
    print(f"{num} is not perfect number!")
