// Write a program to maintain a telephone directory. Use class and object with methods add() and 
// show() to manage entries. 

#include <iostream>
using namespace std;

class Tel_Directory
{
    char name[20];
    char address[20];
    long long int tel_num;

public:
    void add()
    {
        cout << "\n--- Add Telephone Record ---" << endl;
        cout << "\nEnter Name : ";
        cin >> name;

        cout << "Enter Address : ";
        cin >> address;

        cout << "Enter Telephone Number : ";
        cin >> tel_num;
    }
    void show()
    {
        cout << "\nName : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Telephone Number : " << tel_num << endl;
        cout << "\n---------------------------------------" << endl;
    }
};

int main()
{
    const int MAX = 50;
    int choice, count = 0;

    Tel_Directory objt[MAX];

    do
    {
        cout << "\n--- Directory Menu ---" << endl;
        cout << "\n1.Add \n2.Show All \n0.Exit" << endl;
        cout << "Enter your choice (0-2) : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < MAX)
            {
                objt[count].add();
                count++;
            }
            else
            {
                cout << "\nDirectory is Full" << endl;
            }
            break;
        case 2:
            if (count == 0)
            {
                cout << "\nNo Record Found !! " << endl;
            }
            else
            {
                cout << "\n--- Details of telephone Directory ---" << endl;
                for (int i = 0; i < count; i++)
                {
                    objt[i].show();
                }
            }
            break;
        case 0:
            cout << "\nExiting From program !!" << endl;
            break;
        default:
            cout << "Invalid choice !!" << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}