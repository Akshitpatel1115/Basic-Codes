class Result():
    def __init__(self,cppm,dpa,ic,maths,total):
        self.cppm = cppm
        self.dpa = dpa
        self.ic = ic
        self.maths = maths
        self.total = self.cppm + self.dpa + self.ic + self.maths

    def show_result(self):
        print(f"\nCPPM = {self.cppm}\nDPA = {self.dpa}\nIC = {self.ic}\nMATHS = {self.maths}\nTOTAL = {self.total}\n")


akshit = Result(20,24,44,48,0)
kalp = Result(20,25,38,39,0)

print("Result of akshit : ")
akshit.show_result()
print("Result of kalp : ")
kalp.show_result()
