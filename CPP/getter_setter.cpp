#include <iostream>
#include <string.h>
using namespace std;

class Student{
private :
   int Sid;
   char name[20];

public:
   void SetStd(int id,const char n[]){
      Sid = id;
      strcpy(name,n);
   }
   void GetStd(){
      cout << "Student Id : " << Sid << endl;
      cout << "Student Name : " << name << endl;
   }
};

int main(){
   int i;
   char n[20];
   Student obj;
   cout << "Enter Student id : ";
   cin >> i; 
   cout << "Enter Student name : ";
   cin >> n; 
   obj.SetStd(i,n);
   obj.GetStd();
   return 0;
}