#include <iostream>
using namespace std;

class Account;
class Bank;

class Account{
    int balance;
public:
    Account(int bal) :balance(bal){}
    friend void showdetails(Account a, Bank b);
};

class Bank{
    int code;
public:
    Bank(int c) :code(c){}
    friend void showdetails(Account a, Bank b);
};

void showdetails(Account a, Bank b){
    cout << "Balance : " << a.balance << "\nBank Code : " << b.code << endl;
}

int main(){
    Account obja(20000);
    Bank objb(2609);
    showdetails(obja,objb);
    return 0;
}