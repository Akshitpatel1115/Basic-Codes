def Factorial(n):
    if n == 0:
        return 1
    else:
        return n * Factorial(n-1)

n = int(input("Enter your number : "))
fac = Factorial(n)
print(fac)