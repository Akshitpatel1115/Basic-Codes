def fibonacci_series(n):
  a , b = 0 , 1
  for _ in range(n):
    print(a,end = " ")
    a , b = b , a + b

num = int(input("Enter number = "))

if num <= 0:
    print("Please enter positive intager!")
else:
    print("fibonacci series : ")
    fibonacci_series(num)