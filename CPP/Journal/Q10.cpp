// Create a base class `Shape` with virtual function `area()`. Derive `Rectangle` and `Triangle` to 
// override `area()` and use a base class pointer to call functions. 

#include <iostream>
using namespace std;

class Shape // Base class
{
public:
    virtual void input() = 0;  // pure virtual function
    virtual double area() = 0; // pure virtual function
};

class Rectangel : public Shape // Child class
{
    double length, breadth; // private prop
public:
    void input()
    { // user input function for L B
        cout << "Enter Length of Rectangle : ";
        cin >> length;

        cout << "Enter Breadth of Rectangle : ";
        cin >> breadth;
    }
    double area()
    { // find area
        return length * breadth;
    }
};

class Triangle : public Shape // Child class
{
    double base, height; // private prop
public:
    void input()
    { // user input funtion for B H
        cout << "\nEnter Base of Triangle : ";
        cin >> base;

        cout << "Enter Height of Triangle : ";
        cin >> height;
    }
    double area()
    { // find area
        return 0.5 * base * height;
    }
};

int main()
{
    Shape *objs; // base class pointer

    Rectangel objr; // class rectangle object
    objs = &objr;   // store memory address of class rectangle object into shape class object
    objs->input();  // call input method by base class
    cout << "\nArea of Rectangle is : " << objs->area() << endl;

    Triangle objt; // class triangle object
    objs = &objt;  // store memory address of class triangle object into shape class object
    objs->input(); // call input method by base class
    cout << "\nArea of Triangle is : " << objs->area() << endl;

    return 0;
}