num = int(input("Enter number = "))

while num > 0:
    print(num % 10)  # % gives last digit of a number
    num = num // 10  # // remove last digit of a number
