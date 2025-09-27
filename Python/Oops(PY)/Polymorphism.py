# in polymoephism, we can use one method in mutlipale class

class animal():
    def __init__(self,name):
        self.name = name

    def show_name(self):
        print(self.name)

class human():
    def __init__(self,name):
        self.name = name

    def show_name(self):
        print(self.name)

human1 = human("Akshit")
animal1 = animal("Tiger")

# human1.show_name()
# animal1.show_name()

# polymorphism with inheritance
class animal():
    def __init__(self,name):
        self.name = name

    def show_name(self):
        print(self.name)

class human(animal):
    def show_name(self):
        print(self.name)

human1.show_name()