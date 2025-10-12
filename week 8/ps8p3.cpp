#include <iostream>
#include <iomanip>
using namespace std;

double compute_tuition(double credits) {
    return credits * 250;
}

int main() {
    string name;
    double credits, tuition, total = 0;
    int count = 0;

    cout << "Enter last name and credits taken (Ctrl+Z to stop):\n";
    while (cin >> name >> credits) {
        tuition = compute_tuition(credits);
        cout << "Student: " << name << " Tuition Owed: $" << fixed << setprecision(2) << tuition << endl;
        total += tuition;
        count++;
    }

    cout << "\nTotal Tuition: $" << total << " | Number of Students: " << count << endl;
    return 0;
}
