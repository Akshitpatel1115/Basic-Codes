// Create a base class `Shape`, and derive classes `Rectangle` and `Triangle`. Use functions to input 
// dimensions and calculate area of each shape.

#include <iostream>
using namespace std;

class Shape // base class
{
public:
    virtual void input() = 0;
    virtual double area() = 0;
    
};

class Rectangel : public Shape// derive from Shape
{
    double length, breadth;

public:
    void input() override
        {
            cout << "Enter Length of rectangle : ";
            cin >> length;

            cout << "Enter Breadth of rectangle : ";
            cin >> breadth;
        }
    double area() override{
        return length*breadth;
    }
};

class Triangle : public Shape // derive from Shape
{
    double base, height;

public:
    void input() override
    {
        cout << "\nEnter Base of triangle : ";
        cin >> base;

        cout << "Enter Heigth of triangle : ";
        cin >> height;
    }
    double area() override{
        return 0.5*base*height;
    }
};

int main()
{
    Rectangel r;
    r.input();
    cout << "\nArea of Rectangle is : " << r.area() << endl;

    Triangle t;
    t.input();
    cout << "\nArea of Triangle is : " << t.area() << endl;
    return 0;
}