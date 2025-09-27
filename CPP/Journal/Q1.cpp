// Create a class `Employee` with data members `emp_id`, `name`, and `salary`. Accept and display 
// employee details. Calculate and display net salary after deducting 10% tax.

#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    // private prop
    int emp_id; 
    char e_name[20];
    float salary;

public:
    int setdata(int id,const char name[],float sal){
        // initialing values of employee
        emp_id = id; 
        strcpy(e_name , name);
        salary = sal; 
    }
    int getdata(){ // print details of employee
        cout << "Employee Id : " << emp_id << endl;        
        cout << "Employee Name : " << e_name << endl;
        cout << "Gross Salary : " << salary << endl;
    }
    float cal_net_sal(){ // deducting tax (10%)
        float tax = salary * 0.10;
        float net_sal = salary - tax;
        cout << "Tax deducted : " << tax << endl;
        cout << "Net Salary : " << net_sal << endl;
    }
};

int main(){
    Employee emp; // class object
    emp.setdata(101,"Akshit",2000.00); // call parameterized constructor
    emp.getdata(); // call member function
    emp.cal_net_sal(); // call member function
    return 0;

}