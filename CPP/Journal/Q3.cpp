// Create a class `Box` with constructor overloading to initialize dimensions and calculate volume of 
// the box. 

#include <iostream>
using namespace std;

class Box{
    double length,width,height;
public:
    Box(){ // default constructor
        length = width = height = 1;
    };

    // constructor overloading
    Box(double side){ // single para constructor
        length = width = height = side;
    };

    Box(double l,double w,double h){ // multi para constructor 
        length = l;
        width = w;
        height = h;
    };

    double volume (){
        return length*width*height;
    }
};

int main(){
    Box obj1;
    cout << "Volume Of Box is (Default constructor): " << obj1.volume() << endl;

    Box obj2(3);
    cout << "Volume Of Box is (single parameterized constructor) : " << obj2.volume() << endl;

    Box obj3(6,5,4);
    cout << "Volume Of Box is (multiple parameterized constructor) : " << obj3.volume() << endl;
    return 0;
}