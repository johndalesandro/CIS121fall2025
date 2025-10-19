#include <iostream>
#include <string>
using namespace std;

double getCreditCost(char districtCode) {
    return (toupper(districtCode) == 'I') ? 250.0 : 550.0;
}

double computeTuition(int credits, double costPerCredit) {
    return credits * costPerCredit;
}

int main() {
    string lastName;
    char districtCode;
    int credits;
    double tuition, totalTuition = 0;

    cout << "Enter student last name, credits, and district code (Ctrl+Z to stop): " << endl;

    while (cin >> lastName >> credits >> districtCode) {
        double cost = getCreditCost(districtCode);
        tuition = computeTuition(credits, cost);
        cout << lastName << " tuition cost: $" << tuition << endl;
        totalTuition += tuition;
    }

    cout << "\nTotal of all tuition costs: $" << totalTuition << endl;
    return 0;
}