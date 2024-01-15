#include <iostream>
#include <string>
using namespace std;
class Account
{
public:
    int ANum,AB;
    char Aname[20], AT[20], ABr[20];

    void enterdata()
    {
        cout << endl << "Enter Account Number: ";
        cin >> ANum;
        cout << "Enter Account Name: ";
        cin >> Aname;
        cout << "Enter Account Type: ";
        cin >> AT;
        cout << "Enter Account Branch: ";
        cin >> ABr;
        cout << "Enter Account Balance: ";
        cin >> AB;
        cout << endl;
    }
    void getdata()
    {
        cout << endl << "Details of this Account Number: " << ANum << " is " << endl;
        cout << "Account Number: " << ANum << endl
             << "Account Name: " << Aname << endl
             << "Account Type: " << AT << endl
             << "Account Branch: " << ABr << endl
             << "Account Balance: " << AB << endl;
    }
};
int main()
{
    Account a[3];
    int choice;
    int Account_Number;

    do
    {
        cout << "-: Welcome to the Bank Management System :-" << endl;
        cout << "Enter 1 - Add Account" << endl;
        cout << "Enter 2 - Search Account" << endl;
        cout << "Enter 3 - Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1)
        {
            for (int i = 0; i < 1; i++)
            {
                a[i].enterdata();
            }
        }
        else if (choice == 2)
        {
            cout << "Search Account No: ";
            cin >> Account_Number;

            for (int i = 0; i < 1; i++)
            {
                if (Account_Number == a[i].ANum)
                {
                    a[i].getdata();
                }
            }
        }
        else if (choice >= 3)
        {
            cout << "\nExit...." << endl;
        }

    } while (choice < 3 && choice > 0);
    return 0;
}