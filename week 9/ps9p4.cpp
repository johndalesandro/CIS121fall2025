#include <iostream>
#include <string>
using namespace std;

double getRate(char jobCode) {
    switch (toupper(jobCode)) {
        case 'L': return 25.0;
        case 'A': return 30.0;
        case 'J': return 50.0;
        default: return 0.0;
    }
}

double computePay(double hours, double rate) {
    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}

int main() {
    string lastName;
    char jobCode;
    double hours, rate, pay, totalPay = 0;

    cout << "Enter last name, job code, and hours worked (Ctrl+Z to stop): " << endl;

    while (cin >> lastName >> jobCode >> hours) {
        rate = getRate(jobCode);
        pay = computePay(hours, rate);
        cout << lastName << " gross pay: $" << pay << endl;
        totalPay += pay;
    }

    cout << "\nTotal of all gross pay: $" << totalPay << endl;
    return 0;
}