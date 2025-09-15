#include <iostream>
using namespace std;

int main() {
    string appliance;
    double cost, warranty, total;

    cout << "Enter appliance name: ";
    cin >> appliance;
    cout << "Enter cost of appliance: ";
    cin >> cost;

    if (cost > 1000)
        warranty = cost * 0.10;
    else
        warranty = cost * 0.05;

    total = cost + warranty;

    cout << "Appliance: " << appliance << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Warranty: $" << warranty << endl;
    cout << "Total: $" << total << endl;

    return 0;
}