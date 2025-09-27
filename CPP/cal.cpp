#include <iostream>
using namespace std;

class main{
public:
    int a,b,choice;
    void menu(){
        cout << "<==== Menu ====>" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Divition" << endl;
        cout << "5. Exit\n" << endl;

        cout << "Enter your choice(1-5) : ";
        cin >> choice;
    }

};

class cal : public main{
public: 
    int add(int a,int b){
        return a+b;
    }

    int sub(int a,int b){
        return a-b;
    }

    float mul(float a,float b){
        return a*b;
    }

    float div(float a,float b){
        return a/b;
    }
};

int main(){
    cal objc;
    objc.menu();

    if(objc.choice >= 1 && objc.choice <= 4){
        cout << "Enter value of a : ";
        cin >> objc.a;

        cout << "Enter value of b : ";
        cin >> objc.b;
    }

    if(objc.choice == 1){  
        cout << "Addition is : " << objc.add(objc.a,objc.b) << endl;
    }
    else if(objc.choice == 2){
        cout << "Subtraction is : " << objc.sub(objc.a,objc.b) << endl;
    }
    else if(objc.choice == 3){
        cout << "Multiplication is : " << objc.mul(objc.a,objc.b) << endl;
    }
    else if(objc.choice == 4){
        cout << "Division is : " << objc.div(objc.a,objc.b) << endl;
    }
    else if(objc.choice == 5){
        return 0;
    }
    else{
        cout << "Invalid Choice !! Enter valid choice (1-5)" << endl;
    }
    
    return 0;
}