class Amazon():
    def __init__(self,catagory,price,quantity,quality):
        self.catagory = catagory
        self.price = price
        self.quantity = quantity
        self.quality = quality

    def details(self):
        print(f"catagory = {self.catagory}\nprice = {self.price}\nquantity = {self.quantity}\nquality = {self.quality}\nRating = {self.rating}")


laptop = Amazon("electronic",50000,5,"8.5/10")
dinner_set = Amazon("kitchan",7000,10,"8/10")

class Amazon2(Amazon):
    def __init__(self,catagory,price,quantity,quality,rating):
        super().__init__(catagory,price,quantity,quality)
        self.rating = rating

laptop = Amazon2("electronic",50000,5,"8.5/10","4.5/5")

laptop.details()
