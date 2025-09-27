class coffee_shop():
    def __init__(self,cust_id,cust_name,phone_num):
        self.cust_id = cust_id
        self.cust_name = cust_name 
        self.phone_num = phone_num

    def pyment(self,pyment_method):
        self.pyment_method = pyment_method
    
    def customer_info(self):
        print(f"customer id : {self.cust_id}")
        print(f"customer name : {self.cust_name}")
        print(f"phone number : {self.phone_num}")
        print(f"pyment method : {self.pyment_method}")
    
customer1 = coffee_shop(1,"jagu",7854673829)
customer2 = coffee_shop(2,"raju",8765436789)
customer3 = coffee_shop(3,"bhime",9823876905)

customer1.pyment("cash")
customer2.pyment("cash")
customer3.pyment("Master_card")

print("\nInformation of 1st customer : \n")
customer1.customer_info()

print("\nInformation of 2nd customer : \n")
customer2.customer_info()

print("\nInformation of 3rd customer : \n")
customer3.customer_info()