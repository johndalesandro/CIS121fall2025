#include <iostream>
using namespace std;

int main() {
    char jobCode;
    int hours;
    double rate = 0.0, gross = 0.0;

    cout << "Enter job code (L, J, A): ";
    cin >> jobCode;
    cout << "Enter hours worked: ";
    cin >> hours;

    // Normalize
    if (jobCode >= 'a' && jobCode <= 'z') jobCode = jobCode - 'a' + 'A';

    if (jobCode == 'L') {
        if (hours > 40) rate = 50.0;
        else rate = 40.0;
    }
    else if (jobCode == 'J') {
        if (hours > 60) rate = 100.0;
        else rate = 75.0;
    }
    else if (jobCode == 'A') {
        if (hours > 40) rate = 25.0;
        else rate = 20.0;
    }
    else {
        cout << "Invalid job code entered!" << endl;
        return 1;
    }

    gross = hours * rate;

    cout << "\nJob Code: " << jobCode << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Rate of Pay: $" << rate << endl;
    cout << "Gross Salary: $" << gross << endl;

    return 0;
}