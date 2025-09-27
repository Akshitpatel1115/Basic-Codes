// Create two classes `Alpha` and `Beta`, each with private data. Use a friend function to calculate and 
// display the sum of their private data. 

#include <iostream>
using namespace std;

class Beta;

class Alpha{
    int val_a;
public:
    Alpha(int a) : val_a(a){}
    friend int sum(Alpha a,Beta b);
};

class Beta{
    int val_b;
public:
    Beta(int b) : val_b(b){}
    friend int sum(Alpha a,Beta b);
};

int sum(Alpha a,Beta b){
    int total = a.val_a + b.val_b;
    cout << "Sum of Alpha and Beta is : " << total << endl;
    return total;
}



int main(){
    
    Alpha obja(10);
    Beta objb(30);
    sum(obja,objb);

    return 0;
}