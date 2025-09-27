// Create a program using `enum` to represent days of the week. Accept a number from the user and 
// display the corresponding day using a `switch` statement. 

#include <iostream>
using namespace std;

enum Week{
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

int main(){
    int choice;
    cout << "Enter number for week day : ";
    cin >> choice;

    Week w = static_cast<Week>(choice);
    
    switch(w){
        case Sunday:
            cout << "Sunday" << endl;
            break;
        case Monday:
            cout << "Monday" << endl;
            break;
        case Tuesday:
            cout << "Tuesday" << endl;
            break;
        case Wednesday:
            cout << "Wednesday" << endl;
            break;
        case Thursday:
            cout << "Thursday" << endl;
            break;
        case Friday:
            cout << "Friday" << endl;
            break;
        case Saturday:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid choice!!!" << endl;
    }

    return 0;

}