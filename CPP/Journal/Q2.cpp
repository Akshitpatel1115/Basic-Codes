// Create a class `Rectangle` with data members `length` and `breadth`. Use a constructor to initialize 
// values and include member functions to calculate and display area and perimeter.

#include <iostream>
using namespace std;

class Rectangle{
    double length; // data member private
    double breadth;  

public:
    Rectangle(double l,double b){ // parameterized constructer
        length = l; 
        breadth = b;
    };
    double area(){ // member function
        return length * breadth;
    }
    double perimeter(){ // member function
        return 2 * (length + breadth);
    }
    void display(){
        cout << "Area Of Rectangle is : " << area() << endl;
        cout << "Perimeter Of Rectangle is : " << perimeter() << endl;
    }
    
};

int main (){
    Rectangle objr(10.00,5.00); // class object
    objr.display();
    return 0;
}