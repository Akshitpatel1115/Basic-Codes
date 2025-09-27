a = [1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,54,67,5,43,3,45,23,346,23]
dict = {} # key represent value and its value represent frequncy

for i in a: # store a values in i
    if i in dict.keys(): # cheack if key is present in dict
        dict[i] += 1  # if key exist in dict then in keys value +1
    else:
        dict[i] = 1 # if key is not exist in dict then make key and store 1 

print(dict)