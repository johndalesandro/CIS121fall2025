#include <iostream>
using namespace std;

int main() {
    int part, qty;
    double costPerUnit, total;

    cout << "Enter part number: ";
    cin >> part;
    cout << "Enter quantity: ";
    cin >> qty;

    if (part == 10 && qty > 1000)
        costPerUnit = 1.0;
    else if (part == 99 && qty > 500)
        costPerUnit = 2.0;
    else if (part == 70 && qty > 200)
        costPerUnit = 5.0;
    else
        costPerUnit = 10.0;

    total = costPerUnit * qty;

    cout << "Part: " << part << endl;
    cout << "Cost per unit: $" << costPerUnit << endl;
    cout << "Total cost: $" << total << endl;

    return 0;
}
