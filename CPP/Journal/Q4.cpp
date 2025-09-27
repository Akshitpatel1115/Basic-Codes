// Create a base class `Person` with members `name` and `age`. Derive a class `Student` with an 
// additional member `percentage`. Accept and display data using constructor and member functions.

#include <iostream>
#include <string.h>
using namespace std;

class person{ // base class
    char name[20];
    int age;
public:
    person(const char n[]="NULL",int a=0){
        strcpy(name,n);
        age = a;
    }
    void display(){
        cout << "Person Name : " << name << endl;
        cout << "Person Age : " << age << endl; 
    }
};

class student : public person{ // derive class
    float percentage;
public:
    student(float per=0){
        percentage = per;
    }
    void print(){
        cout <<"Student Percentage : " << percentage <<endl;
    }
};

int main(){
    person objp("Akshit",20);
    objp.display();
    student objs(88.00);
    objs.print();
    return 0;

}