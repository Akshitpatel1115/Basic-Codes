// Accept two strings using character arrays. Use string functions `strcpy()`, `strcat()`, `strcmp()`, and 
// `strlen()` to perform various operations.


#include <iostream>
#include <string.h>
using namespace std;

class StrFun
{
    char str1[20], str2[20];

public:
    void input()
    {
        cout << "\nEnter First string : ";
        cin >> str1;

        cout << "Enter Second string : ";
        cin >> str2;
    }
    void copy()
    {
        char result[20];
        strcpy(result, str1);
        cout << "\nString copied from 1st string: " << result << endl;
    }
    void concatenate()
    {
        cout << "\nConcatenated String : " << strcat(str1, str2) << endl;
    }
    void compare()
    {
        int result = strcmp(str1, str2);
        cout << result << endl;
        if (result == 0)
        {
            cout << "\n" << str1 << " & " << str2 << " both are same!!!" << endl;
        }
        else if (result > 0)
        {
            cout << "\n" << str1 << " Is greater then " << str2 << endl;
        }
        else
        {
            cout << "\n" << str1 << " Is lesser then " << str2 << endl;
        }
    }
    void length()
    {
        int len1, len2;
        len1 = strlen(str1);
        len2 = strlen(str2);

        cout << "\nLength of first string is : " << len1 << endl;
        cout << "Length of second string is : " << len2 << endl;
    }
};

int main()
{
    int choice;
    cout << "1.Copy \n2.Concatenate \n3.Compare \n4.Length \n0.Exit" << endl;
    cout << "Enter your choice (0-4) : ";
    cin >> choice;

    StrFun objs;

    if (choice >= 1 && choice <= 4)
    {
        objs.input();
    }

     switch (choice)
        {
        case 1:
            objs.copy();
            break;
        case 2:
            objs.concatenate();
            break;
        case 3:
            objs.compare();
            break;
        case 4:
            objs.length();
            break;
        case 0:
            cout << "\nBye Bye !!!" << endl;
            return 0;
        default:
            cout << "\nInvalid choice !!!" << endl;
        }
    return 0;
}