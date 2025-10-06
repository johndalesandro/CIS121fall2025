#include <iostream>
#include <string>
using namespace std;

int main() {
    string lname, code;
    double hours, rate, pay, totalPay = 0;
    int employees = 0;

    while (cin >> lname >> code >> hours) {
        if (code == "L") rate = 25;
        else if (code == "A") rate = 30;
        else if (code == "J") rate = 50;
        else rate = 0;

        if (hours > 40)
            pay = 40 * rate + (hours - 40) * rate * 1.5;
        else
            pay = hours * rate;

        totalPay += pay;
        employees++;

        cout << "Employee: " << lname << " Code: " << code
             << " Hours: " << hours << " Pay: " << pay << endl;
    }

    cout << "Average Pay: " << totalPay / employees
         << " Employees: " << employees << endl;
    return 0;
}