str = input("Enter your string : ")
len = len(str) 
pal = ""

for i in range(len-1,-1,-1):
    pal = pal + str[i]

if str == pal:
    print(f"'{str}' is palindrom string!")
else:
    print(f"'{str}' is not paliindrom string!")