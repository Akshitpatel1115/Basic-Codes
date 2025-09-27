num = int(input("Enter number = "))
tem = num
sum = 0
while num > 0:
    rem = num % 10
    fac = 1
    for i in range(1,rem+1):
        fac = fac * i
    sum = sum + fac
    num = num // 10
if tem == sum:
    print("strong number!")
else:
    print("not strong number!")

