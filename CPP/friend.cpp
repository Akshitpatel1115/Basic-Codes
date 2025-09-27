#include <iostream>
#include <string.h>
using namespace std;

class Car{
    char CName[20];
public:
    Car(){
        strcpy(CName,"Thar");
    };

    friend void CarName(Car obj); 
};

void CarName(Car obj){ // This function can access Car class bcz its a friend of car class 
    cout << "Mere Bhai ki car ka name : "<<obj.CName<<endl;
}

int main(){
    Car objc;
    CarName(objc);
    return 0;
}