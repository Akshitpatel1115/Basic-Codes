//  Create an abstract class `Employee` with a pure virtual function `calculateSalary()`. Derive classes 
// `FullTime` and `PartTime` and implement salary calculations. 

#include <iostream>
using namespace std;

class Employee{ // base class
public:
    virtual float calculateSalary() = 0;
};

class FullTime : public Employee{
    float Fulltime_sal;
public:
    FullTime(float f_sal) : Fulltime_sal(f_sal){}; // para constructor
    float calculateSalary(){
        float Monthly_sal = Fulltime_sal;
        return Monthly_sal;
    }
};

class PartTime : public Employee{ // derive from Employee
    int working_hour , hourly_rate;
    float Parttime_sal;
public:
    PartTime(int work_h,int hour_rate) : working_hour(work_h) , hourly_rate(hour_rate){}; // para constructor
    float calculateSalary(){
        Parttime_sal = working_hour * hourly_rate;
        return Parttime_sal;
    }
};

int main(){
    FullTime objf(60000);
    cout << "Full-Time Salary is : " <<objf.calculateSalary() << endl;

    PartTime objp(80,500);
    cout << "Part-Time Salary is : " << objp.calculateSalary() << endl;

    return 0;
}