#include <iostream>
using namespace std;

void computeOrder(double widgets, double &costPerWidget, double &extendedPrice, double &tax, double &totalOrder) {
    if (widgets >= 10000)
        costPerWidget = 4.00;
    else if (widgets >= 5000)
        costPerWidget = 5.00;
    else
        costPerWidget = 10.00;

    extendedPrice = widgets * costPerWidget;
    tax = extendedPrice * 0.07;
    totalOrder = extendedPrice + tax;
}

int main() {
    double widgets, costPerWidget, extendedPrice, tax, totalOrder;
    double sumTotal = 0;

    cout << "Enter number of widgets (Ctrl+Z to stop): ";
    while (cin >> widgets) {
        computeOrder(widgets, costPerWidget, extendedPrice, tax, totalOrder);
        cout << "Cost per widget: $" << costPerWidget
             << "  Extended price: $" << extendedPrice
             << "  Tax: $" << tax
             << "  Total order: $" << totalOrder << endl;

        sumTotal += totalOrder;
        cout << "Enter number of widgets (Ctrl+Z to stop): ";
    }

    cout << "\nSum of all total orders: $" << sumTotal << endl;
    return 0;
}