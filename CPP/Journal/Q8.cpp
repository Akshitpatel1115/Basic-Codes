//  Create classes `Student`, `Test`, `Sports`, and `Result` to demonstrate hybrid inheritance. Accept 
// data and display total marks.

#include <iostream>
#include <string>
using namespace std;

class Student{ // base class
protected:
    char name[20];
    int rollnum;
public: 
    void getstud(){
        cout << "Enter student name : ";
        cin >> name;

        cout << "Enter student roll number : ";
        cin >> rollnum;
    }
};

// virtual inheritance
class Test : virtual public Student{ // derive from Student
protected:
    int sub1,sub2,sub3;
public:
    void getmarks(){
        cout << "Enter 1st Subject marks : ";
        cin >> sub1;

        cout << "Enter 2nd Subject marks : ";
        cin >> sub2;

        cout << "Enter 3rd Subject marks : ";
        cin >> sub3;
    }
};

// virtual inheritance
class Sports : virtual public Student{ // derive from Student
protected:
    int sports_score;
public:
    void getsportsScore(){
        cout << "Enter Sports Score : ";
        cin >> sports_score;
    }
};

class Result : public Test , public Sports{ // derive from Test & Sports
protected:
    int total;
public:
    void display(){
        total = sub1 + sub2 + sub3 + sports_score;
        cout << "\nStudent Name : " << name << endl;
        cout << "Total Score : " << total << endl;
    }
};

int main(){
    Result objr;
    objr.getstud();
    objr.getmarks();
    objr.getsportsScore();
    objr.display();
    
    return 0;
}