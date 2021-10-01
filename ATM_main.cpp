#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Log in details verification
 */
bool login(int password)
{
    if (password > 999 && password < 10000)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * Function to show instructions
 */
void instructions(double balance)
{
    cout << "**********MENU**********" << endl;
    cout << "Available Balance = " << fixed << setprecision(2) << balance << "/-" << endl;
    cout << endl;
    cout << "1.Withdraw" << endl;
    cout << "2.Deposit" << endl;
    cout << "************************" << endl;
}

int main()
{
    int password;
    double available = 2000, deposit, withdraw;
    cout << "*****Card Accepted*****" << endl;
    cout << "Enter your password: ";
    cin >> password;
    bool password_checker = login(password);

    /**
     * Checks if the password is valid or not
     */

    if (!password_checker)
    {
        cout << "Incorrect password" << endl;
        cout << "Card blocked!" << endl;
    }
    else
    {
        int option;
        while (option != 0)
        {
            system("cls");
            instructions(available);
            cout << "Option-> ";
            cin >> option;

            switch (option)
            {
            case 1:
                cout << "Enter withdraw amount: ";
                cin >> withdraw;
                if (withdraw <= available)
                {
                    available -= withdraw;
                }
                else
                {
                    cout << "Withdraw amount shouldn't be greater than available balance";
                }
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> deposit;
                available += deposit;
                break;
            default:
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
