// Create a base class `Animal` with function `speak()`. Derive classes `Dog` and `Cat`, override `speak()`  
// function to display "Bark" and "Meow" respectively.

#include <iostream>
using namespace std;

class Animal
{ // base class
public:
    virtual void speak() = 0;
};

class Dog : public Animal
{ // derive from Animal
public:
    void speak() override
    {
        cout << "Bark!!!" << endl;
    }
};

class Cat : public Animal
{ // derive from Animal
public:
    void speak() override
    {
        cout << "Meow!!!" << endl;
    }
};

int main()
{
    Dog objd;
    cout << "Dog Sound : ";
    objd.speak(); 

    Cat objc;
    cout << "Cat Sound : "; 
    objc.speak();

    return 0;
}