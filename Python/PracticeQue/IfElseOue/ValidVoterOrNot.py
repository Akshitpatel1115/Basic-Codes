name = input("Enter youor name = ")
age = int(input("Enter your age = "))

if age >= 18:
    print(f"Hello {name},You are a valid voter!")
elif age < 18 and age > 0:
    print(f"Hello {name},You are not a valid voter!")
else:
    print("Please enter valid age!")