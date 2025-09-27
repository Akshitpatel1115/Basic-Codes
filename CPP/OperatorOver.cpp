#include <iostream>
using namespace std;

class complex{
    int real,imag;
public:
    complex (){};
    complex (int a, int b):real(a),imag(b){};
    complex operator / (const complex &obj2){
        // complex objres;
        // objres.real = real / obj2.real;
        // objres.imag = imag / obj2.imag;
        // return objres;

        //  OR 

        return complex(real / obj2.real,imag / obj2.imag);
    };
    void print(){
        cout<<"("<<real<<","<<imag<<")"<<endl;
    }
};

int main(){
    complex obj1(10,8) ,obj2(5,8);
    complex obj3 = obj1 / obj2;
    obj3.print();
    return 0;
}