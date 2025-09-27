# polindrom number or not
n = int(input("Enter your number : "))
tem = n
rev =  0

while n > 0:
    rem = n % 10
    rev = rev * 10 + rem
    n //= 10

if tem is rev:
    print(f"{tem} is polindrom number.")

else:
    print(f"{tem} isn't polindrom number.")
