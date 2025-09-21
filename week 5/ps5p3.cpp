#include <iostream>
using namespace std;

int main() {
    string lastName;
    char jobCode;
    double hours, rate, pay;

    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter job code (E/J/A): ";
    cin >> jobCode;

    if (jobCode == 'E')
        rate = 25.00;
    else if (jobCode == 'J')
        rate = 20.00;
    else
        rate = 15.00;

    pay = hours * rate;

    cout << "Employee: " << lastName << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Pay Rate: $" << rate << endl;
    cout << "Total Pay: $" << pay << endl;
}