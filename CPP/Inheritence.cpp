#include <iostream>
using namespace std;

class food{
public:
    virtual void test(){
        cout << "This is food class.." << endl;
    }
};

class jalebi : public food{
    void test(){
        cout << "It's Sweet.." << endl;
    }
};

class pizza : public food{
    void test(){
        cout << "It's Testy.." << endl;
    }
};

int main(){
    food* objt;
    objt -> test();
    jalebi objj;
    pizza objp;
    

    int choice;
    cout << "1. jalebi \n2. pizza " << endl;
    cout << "Enter Your Choice : ";
    cin >> choice;

    switch (choice){
        case 1: 
            objt = &objj;
            objt -> test();
            break;
        case 2:
            objt = &objp;
            objt -> test();
            break;
        default:
            cout << "Enter valid choice..!" << endl;
    }
    
    return 0;
}