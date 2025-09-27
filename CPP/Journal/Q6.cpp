// Create class `Student` and `Sports` to accept marks and sports score respectively. Derive a class 
// `Result` from both and display total score.Demonstrate multiple Inheritance 

#include <iostream>
using namespace std;

class Student{ // base class
protected:
    int marks;
public:
    void getMarks(){
        cout << "Enter your marks : ";
        cin >> marks;
    }
};

class Sport{ // base class
protected:
    int sports_score;
public:
    void getsportsScore(){
        cout << "Enter your sports score : ";
        cin >> sports_score;
    }
};

class Result : public Student , public Sport{ // derive from Student & Sport
    int total;
public:
    void display(){
        total = marks + sports_score;
        cout << "Total Score is : " << total;
    }
};

int main(){
    Result objr;
    objr.getMarks();
    objr.getsportsScore();
    objr.display();

    return 0;
}