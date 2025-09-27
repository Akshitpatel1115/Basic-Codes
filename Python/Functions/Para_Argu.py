# Normal parameter and Defualt argument.
def hello(a,b):
    print(a+b)

hello(10,26)

# Defualt parameter and Keyword argument
def age(z,q,x = 18,y = 19):  # x = 18 and y = 19 is defualt parameter
    print("You can vote!")

age(q = 17,z = 10) # this are keyword argument

#----- MIMP -----
# print --> using for printing statement
# return --> using for return value to caller(parameter)