// Write a Program to demonstrate multilevel Inheritance. Create class `A` with integer `x`, class `B` 
// derives from `A` and has integer `y`, class `C` derives from `B` and calculates product of `x` and `y`.

#include <iostream>
using namespace std;

class a{ // base class
protected:
    int x;
};

class b : public a{ // derive from a
protected:
    int y;
};

class c : public b{ // derive from b
public:
    c(int a,int b){
        x = a;
        y = b;
    }
    void print(){
        cout << "Product of x and y is : " << x*y << endl;
    }
};

int main(){
    c objc(10,5);
    objc.print();
    return 0;
}