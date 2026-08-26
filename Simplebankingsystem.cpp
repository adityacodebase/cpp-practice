#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 5000.0;
    double amount;

    cout << "============================\n";
    cout << "      SIMPLE BANKING SYSTEM\n";
    cout << "============================\n";

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nYour balance is: Rs. " << balance << endl;
                break;

            case 2:
                cout << "\nEnter amount to deposit: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful!\n";
                    cout << "New balance: Rs. " << balance << endl;
                }
                else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 3:
                cout << "\nEnter amount to withdraw: Rs. ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!\n";
                }
                else if (amount > balance) {
                    cout << "Insufficient balance!\n";
                }
                else {
                    balance -= amount;
                    cout << "Withdrawal successful!\n";
                    cout << "Remaining balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "\nThank you for using our banking system!\n";
                break;

            default:
                cout << "\nInvalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}