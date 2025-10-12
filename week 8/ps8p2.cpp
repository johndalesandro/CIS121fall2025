#include <iostream>
#include <iomanip>
using namespace std;

double compute_pay(char job, double hours) {
    double rate;
    if (job == 'L') rate = 25;
    else if (job == 'A') rate = 30;
    else if (job == 'J') rate = 50;

    double pay = 0;
    if (hours > 40)
        pay = (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        pay = hours * rate;
    return pay;
}

int main() {
    string name;
    char job;
    double hours, pay, total = 0;
    int count = 0;

    cout << "Enter last name, job code, and hours worked (Ctrl+Z to stop):\n";
    while (cin >> name >> job >> hours) {
        pay = compute_pay(job, hours);
        cout << "Employee: " << name << " Pay: $" << fixed << setprecision(2) << pay << endl;
        total += pay;
        count++;
    }

    if (count > 0)
        cout << "\nAverage Pay: $" << total / count << " | Number of Employees: " << count << endl;
    return 0;
}
