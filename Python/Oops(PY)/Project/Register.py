class Student():
    def __init__(self,roll_num,name,class_name):
        self.roll_num = roll_num
        self.name = name 
        self.class_name = class_name
        self.marks = {}

    def student_marks(self,subject,marks):
        if subject in self.marks:
            print(f"{self.marks} already has marks of {subject}.")
        else:
            self.marks[subject] = marks

    def average_marks(self):
        if not self.marks:
            print("There are no avalible of marks.")
        total_marks = sum(self.marks.values())
        average = total_marks / len(self.marks)
        return average
    
    def student_info(self):
        print(f"roll number : {self.roll_num}")
        print(f"Name : {self.name}")
        print(f"class_name : {self.class_name}")
        print(f"marks : {self.marks}")
        print(f"average : {self.average_marks()}")

std1 = Student(325,"Akshit","12th")
std2 = Student(200,"Ram","10th")

std1.student_marks("maths",98)
std1.student_marks("English",85)

std2.student_marks("science",80)
std2.student_marks("s.s",75)

std1.student_info()
std2.student_info()