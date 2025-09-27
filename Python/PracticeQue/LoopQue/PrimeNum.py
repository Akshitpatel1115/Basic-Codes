num = int(input("Enter your number = "))
count = 0
for i in range(1,num+1):
    if num % i == 0:
        count = count + 1
if count == 2:
    print(f"{num} number is prime number!")
else:
    print(f"{num} number is composite number!")
