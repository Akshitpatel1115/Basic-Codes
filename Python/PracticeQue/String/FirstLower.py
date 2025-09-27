a = "My NamE iS PaTel AksHit"
b = ''
for i in a: # store lower case
    if i.islower():
        b = b + i

for i in a: # store upper case
    if i.isupper():
        b = b + i

print(b)

# --> words by words
x = "yoo BrotHER How Are yOu"
y = x.split()
z = ''