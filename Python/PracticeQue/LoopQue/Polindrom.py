num = int(input("Enter number = ")) # num = 121
tem = num
rev = 0
while num > 0:
    rem = num % 10 # for getting last digit
    rev = rev * 10 + rem # ex. 0 * 10 + 1 = 1  -->  1 * 10 + 2 = 12  --> 2 * 10 + 1 = 121
    num = num // 10 # remove last digit 
if rev == tem:
    print(f"{tem} is polindrom!")
else:
    print(f"{tem} isn't polindrom!")
