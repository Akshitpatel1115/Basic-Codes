# Dictionary --> whenever we write something in {key:value,key2:val2,...} it lnown as dictionary. it's index value == key. All keys are must be uniqe

a = {1:23,2:"patel",3:42.5}
print(a[3])

# mutable
a[2] = 'akshit'
print(a[2])

# insert new recode
a[4] = 'patel'
print(a)

# update
b = {4:10,5:20,6:90}
a.update(b)
print(a)

# values
for i in a.values():
    print(i)