# constructer / initilization function automaticly run
class Factory:
    def __init__(self,BT,tyers,ET): # This is Constructer function # after self k.w all are prameters
        print(BT,tyers,ET)

ferrari = Factory("covered",4,"8 cycle") # ferrari is an object # in () all are arguments

# SELF --> self store objects location means object and self value and location are same

# if we need to assign value to an object then we use self 
class Factory:
    def __init__(self,BT,tyers,ET): 
        self.BT = BT # storing values of parmeter in object
        self.tyers = tyers # object attribute
        self.ET = ET
    
    def hello(self): # object method
        print("Hello brother!")

ferrari = Factory("covered",4,"8 cycle")
alto = Factory("covered",4,"2 cycle")

print(f"Body Type of ferrari is {ferrari.BT}.")
print(f"Tyers of ferrari are {ferrari.tyers}.")
print(f"Engine type of ferrari is {ferrari.ET}")

print(alto.BT)
print(ferrari.BT)

ferrari.hello()