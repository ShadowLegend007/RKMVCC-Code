#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNumber;
    double balance;

public:
    BankAccount(int number, double initialBalance) {
        accNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful." << endl;
        } else {
            cout << "Deposit amount must be greater than zero." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawal of $" << amount << " successful." << endl;
            } else {
                cout << "Insufficient funds. Withdrawal failed." << endl;
            }
        } else {
            cout << "Withdrawal amount must be greater than zero." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    int accountNumber;
    double initialBalance;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance: $";
    cin >> initialBalance;

    BankAccount myAccount(accountNumber, initialBalance);

    cout << "\nInitial Account Details:" << endl;
    myAccount.display();

    double depositAmount;
    cout << "\nEnter amount to deposit: $";
    cin >> depositAmount;
    myAccount.deposit(depositAmount);
    myAccount.display();

    double withdrawAmount;
    cout << "\nEnter amount to withdraw: $";
    cin >> withdrawAmount;
    myAccount.withdraw(withdrawAmount);
    myAccount.display();

    return 0;
}
