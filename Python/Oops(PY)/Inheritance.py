class Factory:
    def __init__(self,BT,tyers,ET): 
        self.BT = BT
        self.tyers = tyers
        self.ET = ET

    def showdetails(self):
        print(f"Your details are : \n {self.BT},{self.tyers},{self.ET}")

class Factory2:
    print("Hello")

# This was inheritance means we can access all statements of Factory class
class Hero(Factory):  # sub-class
    def __init__(self, BT, tyers, ET,glass):
        super().__init__(BT, tyers, ET) # super class
        self.glass = glass

obj1 = Hero(2,3,5,2)
obj1.showdetails()
print(obj1.glass)

# multipale inheritance
class Hero(Factory,Factory2):
    pass

# multi-level inheritance
class BikeFactory(Hero): # BikeFactory class work on Hero-class and Hero calss work on Factory class
    pass

