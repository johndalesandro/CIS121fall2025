#include <iostream>
using namespace std;

int main() {
    string lastName;
    double hours, rate, grossPay;

    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter pay rate: ";
    cin >> rate;

    grossPay = hours * rate;

    cout << "Employee: " << lastName << ", Gross Pay: $" << grossPay << endl;
    return 0;
}