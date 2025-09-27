// Create an abstract class Employee with a pure virtual function calculateSalary(). Derive two 
// classes FullTime and PartTime from it. Implement salary calculation logic differently in each 
// class and display the salary using base class pointer. 

#include <iostream>
using namespace std;

class Employee{
public:
    virtual float calculateSalary() = 0;
};

class FullTime : public Employee{
    float monthly_sal;
public:
    FullTime(float m_sal) : monthly_sal(m_sal){};
    float calculateSalary(){
        return monthly_sal;
    }
};

class PartTime : public Employee{
    float hourly_rate , working_hour;
public:
    PartTime(float h_rate, float working_h) : hourly_rate(h_rate), working_hour(working_h){};
    float calculateSalary(){
        return hourly_rate*working_hour;
    }
};

int main(){
    Employee *obje;

    FullTime objf(60000);
    obje = &objf;
    cout << "Full-Time Salary : " << obje -> calculateSalary() << endl;

    PartTime objp(500,60);
    obje = &objp;
    cout << "Part-Time Salary : " << obje -> calculateSalary() << endl;

    return 0;
}