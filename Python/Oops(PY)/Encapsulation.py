# class Attribute --> When we write variable in class it's known as attribute.
# class Methos --> When we create function in class it's known as method.
class Factory:
    a = 12 # class attribute
    b = 19
    def hello():  # class method
        print("hello world!")

# public can access from outside of class.
# private can not access from outside of class.

# This public & private was method of Encapsulation.

class demo:  
    __a = 10 # private attribute
    b = 20 # public attribute

    def hello():  # public method
        print("hello world!")
    def __name(): # private method
        print("My name is patel akshit!")
    __name()

print(demo)

# object --> When we call class by storing it in variable , this thing call object.
# --> Object have same power as class
obj = demo()
print(obj.b)