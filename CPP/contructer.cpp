#include <iostream>
using namespace std;

class myClass{
    int x;
public:
    myClass(){
        cout<<"Defualt constucter.."<<endl;
    }

    myClass(const int value){ // parameterized constructer
        x = value;
        cout<<"Value of x in parameterized constructer is : "<<x<<endl;
    }

    myClass(const myClass &ab){ 
        x = ab.x;
        cout<<"Value of x in copy contructer is : "<<x<<endl;
    }
};

int main (){
    myClass objd;
    myClass objp(10);

    myClass objcop = objp;

    return 0;

}