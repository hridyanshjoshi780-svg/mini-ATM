#include<iostream>
using namespace std;
float takeout(float account, float withdraw) {
    if (account >= withdraw) {
        account -= withdraw;
        cout << "Withdrawal complete. Amount withdrawn: " << withdraw << endl;
        cout << "Amount left in account: " << account << endl;
    } else {
        cout << "Insufficient funds. Please deposit more money." << endl;
    }
    return account;
}
float moneyin(float account, float deposit) {
    account += deposit;
    cout << "Amount deposited successfully." << endl;
    cout << "Current account balance: " << account << endl;
    return account;
}
int main() {
    float account = 10000.0;
    float deposit, withdraw;
    char check;
    do {
        cout << "\nEnter 'w' to withdraw, 'd' to deposit, 'c' to check balance, or 'e' to exit: ";
        cin >> check;
        switch (check) {
            case 'w':
                cout << "Enter amount to withdraw: ";
                cin >> withdraw;
                account = takeout(account, withdraw);
                break;
            case 'd':
                cout << "Enter amount to deposit: ";
                cin >> deposit;
                account = moneyin(account, deposit);
                break;
            case 'c':
                cout << "Your account balance is: " << account << endl;
                break;
            case 'e':
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid input. Please try again." << endl;
    } while (check != 'e');
    return 0;
}
