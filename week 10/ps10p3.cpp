#include <iostream>
#include <string>
using namespace std;

void computeTuition(double creditHours, double financialAid, double &tuition) {
    tuition = (creditHours * 250) - financialAid;
}

int main() {
    string lastName;
    double creditHours, financialAid, tuition;
    double totalTuition = 0;
    int count = 0;

    cout << "Enter student's last name, credit hours, and financial aid (Ctrl+Z to stop): ";
    while (cin >> lastName >> creditHours >> financialAid) {
        computeTuition(creditHours, financialAid, tuition);
        cout << "Student: " << lastName << "  Tuition owed: $" << tuition << endl;
        totalTuition += tuition;
        count++;
        cout << "Enter student's last name, credit hours, and financial aid (Ctrl+Z to stop): ";
    }

    if (count > 0)
        cout << "\nTotal tuition owed: $" << totalTuition
             << "\nAverage tuition owed: $" << totalTuition / count << endl;

    return 0;
}