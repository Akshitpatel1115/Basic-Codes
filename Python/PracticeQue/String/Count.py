str = "P@#yn26at^&i5ve"

char = 0
digit = 0
spchar = 0

# for i in str:
#     if i.isalpha():
#         char+=1
#     elif i.isdigit():
#         digit+=1
#     else:
#         spchar+=1

# print(f"char = {char}")
# print(f"digit = {digit}")
# print(f"spchar = {spchar}")


#---> By using ASCII Values

for i in str:
    b = ord(i)
    if b >= 65 and b <= 90 or b >= 97 and b <= 122:
        char+=1
    elif b >= 48 and b <= 57:
        digit+=1
    else:
        spchar+=1

print(f"char = {char}")
print(f"digit = {digit}")
print(f"spchar = {spchar}")
