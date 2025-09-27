def even_odd(num):
    if num % 2 == 0:
        print(f"{num} is even!")
    else:
        print(f"{num} is odd!")

s_num = int(input("Enter starting number = "))
e_num = int(input("Enter ending number = "))

for i in range(s_num,e_num):
    num = i
    even_odd(num)