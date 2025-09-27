from abc import ABC , abstractmethod  # This is an library

# if we use abstract class in another class then we must be use abstract class's all methos
class shape(ABC): # abstract class
    @abstractmethod
    def area():
        pass

    @abstractmethod
    def parameter():
        pass

class circle(shape): # inheritance class
    def __init__(self,redius):
        self.redius = redius

    def area():
        pass
    def parameter():
        pass

obj = circle(12)

print(obj.redius)