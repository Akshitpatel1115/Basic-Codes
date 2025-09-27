a = {1:10,2:20,3:30,4:40}
b = {5:50,3:60,4:70,2:10}

for i in b.keys(): # we need to copy B in A that's why we cheack keys of B
    if i in a.keys(): # if i is in keys of A Then run this block of code
        a[i] = a[i] + b[i]
    else:  # if i is not in keys of A then run this block of code
        a[i] = b[i]

print(a)
