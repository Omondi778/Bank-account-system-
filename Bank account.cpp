C++
#include <iostream>
using namespace std;

class BankAccount
{
    string name;
    int accountNumber;
    double balance;

public:

    // Constructor
    BankAccount(string n, int a, double b)
    {
        name = n;
        accountNumber = a;
        balance = b;

        cout << "Account successfully created!" << endl;
    }

    // Function to display account details
    void displayAccount()
    {
        cout << "\n------ BANK ACCOUNT DETAILS ------" << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: KSh " << balance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "\nAccount closed successfully!" << endl;
    }
};

int main()
{
    string name;
    int accountNumber;
    double balance;

    cout << "Enter account holder name: ";
    cin >> name;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter account balance: ";
    cin >> balance;

    BankAccount account(name, accountNumber, balance);

    account.displayAccount();

    return 0;
}
