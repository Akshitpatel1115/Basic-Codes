#include <iostream>
using namespace std;

class shopping_cart{
public:
    virtual void price() = 0;
};

class PowerBank : public shopping_cart{
    void price(){
        cout << "Price of power bank : 2499/-" << endl;
    }
};

class Mouse : public shopping_cart{
    void price(){
        cout << "Price of mouse : 1999/-" << endl;
    }
};

int main(){
    int choice;
    shopping_cart* objs; // Base class pointer
    PowerBank objp;
    Mouse objm;

    cout << "1.PowerBank Price \n2.Mouse Price" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

    if (choice == 1){
        objs = &objp; // storing address of powerbank class obj
        objs -> price(); // call price() of powerbank class 
    }
    else if (choice == 2){
        objs = &objm; // storing address of mouse class obj
        objs -> price(); // call price() of mouse class
    }
    else{
        cout << "\nInvalid Choice!! Enter valid choice" << endl;
    }

    return 0;

}