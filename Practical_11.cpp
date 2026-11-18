
#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

// Structure to store bank account details
struct BankAccount
{
    int accountNumber;
    string accountHolder;
    double balance;

    BankAccount(int number, string name, double amount)
    {
        accountNumber = number;
        accountHolder = name;
        balance = amount;
    }
};

// Function to display List records
void displayList(list<BankAccount> accounts)
{
    list<BankAccount>::iterator it;

    cout << "\nForward Traversal:" << endl;

    for (it = accounts.begin(); it != accounts.end(); it++)
    {
        cout << "Account Number: " << it->accountNumber
             << ", Name: " << it->accountHolder
             << ", Balance: Rs. " << it->balance << endl;
    }

    cout << "\nBackward Traversal:" << endl;

    list<BankAccount>::reverse_iterator rit;

    for (rit = accounts.rbegin(); rit != accounts.rend(); rit++)
    {
        cout << "Account Number: " << rit->accountNumber
             << ", Name: " << rit->accountHolder
             << ", Balance: Rs. " << rit->balance << endl;
    }
}

// Function to search in List
void searchList(list<BankAccount> accounts, int number)
{
    bool found = false;
    list<BankAccount>::iterator it;

    for (it = accounts.begin(); it != accounts.end(); it++)
    {
        if (it->accountNumber == number)
        {
            cout << "\nAccount Found!" << endl;
            cout << "Account Holder: " << it->accountHolder << endl;
            cout << "Account Number: " << it->accountNumber << endl;
            cout << "Balance: Rs. " << it->balance << endl;

            found = true;
            break;
        }
    }

    if (found == false)
    {
        cout << "\nAccount not found!" << endl;
    }
}

// Function to display Vector records
void displayVector(vector<BankAccount> accounts)
{
    vector<BankAccount>::iterator it;

    cout << "\nForward Traversal:" << endl;

    for (it = accounts.begin(); it != accounts.end(); it++)
    {
        cout << "Account Number: " << it->accountNumber
             << ", Name: " << it->accountHolder
             << ", Balance: Rs. " << it->balance << endl;
    }

    cout << "\nBackward Traversal:" << endl;

    vector<BankAccount>::reverse_iterator rit;

    for (rit = accounts.rbegin(); rit != accounts.rend(); rit++)
    {
        cout << "Account Number: " << rit->accountNumber
             << ", Name: " << rit->accountHolder
             << ", Balance: Rs. " << rit->balance << endl;
    }
}

// Function to search in Vector
void searchVector(vector<BankAccount> accounts, int number)
{
    bool found = false;
    vector<BankAccount>::iterator it;

    for (it = accounts.begin(); it != accounts.end(); it++)
    {
        if (it->accountNumber == number)
        {
            cout << "\nAccount Found!" << endl;
            cout << "Account Holder: " << it->accountHolder << endl;
            cout << "Account Number: " << it->accountNumber << endl;
            cout << "Balance: Rs. " << it->balance << endl;

            found = true;
            break;
        }
    }

    if (found == false)
    {
        cout << "\nAccount not found!" << endl;
    }
}

int main()
{
    int choice, number;

    do
    {
        cout << "\n================================";
        cout << "\n BANK ACCOUNT STL CONTAINERS";
        cout << "\n================================";
        cout << "\n1. List Container";
        cout << "\n2. Vector Container";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                list<BankAccount> accounts;

                accounts.push_back(BankAccount(101, "Sameer", 10000));
                accounts.push_back(BankAccount(102, "Asha", 15000));
                accounts.push_back(BankAccount(103, "Rahul", 20000));

                cout << "\n--- LIST CONTAINER ---" << endl;
                cout << "Total Accounts: " << accounts.size() << endl;

                displayList(accounts);

                cout << "\nEnter Account Number to Search: ";
                cin >> number;

                searchList(accounts, number);
                break;
            }

            case 2:
            {
                vector<BankAccount> accounts;

                accounts.push_back(BankAccount(201, "Neha", 12000));
                accounts.push_back(BankAccount(202, "Amit", 18000));
                accounts.push_back(BankAccount(203, "Priya", 25000));

                cout << "\n--- VECTOR CONTAINER ---" << endl;
                cout << "Total Accounts: " << accounts.size() << endl;

                displayVector(accounts);

                cout << "\nEnter Account Number to Search: ";
                cin >> number;

                searchVector(accounts, number);
                break;
            }

            case 3:
                cout << "\nExiting program..." << endl;
                break;

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}

