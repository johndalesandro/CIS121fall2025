#include <iostream>
using namespace std;

void computeOrder(double quantity, double price, double &total, double &tax, double &totalOrder) {
    total = quantity * price;
    tax = total * 0.07;
    totalOrder = total + tax;
}

int main() {
    double quantity, price, total, tax, totalOrder;
    double sumTotal = 0, sumTax = 0, sumTotalOrder = 0;

    cout << "Enter quantity and price (Ctrl+Z to stop): ";
    while (cin >> quantity >> price) {
        computeOrder(quantity, price, total, tax, totalOrder);

        cout << "Total: $" << total 
             << "  Tax: $" << tax 
             << "  Total Order: $" << totalOrder << endl;

        sumTotal += total;
        sumTax += tax;
        sumTotalOrder += totalOrder;

        cout << "Enter quantity and price (Ctrl+Z to stop): ";
    }

    cout << "\nSum of totals: $" << sumTotal
         << "\nSum of taxes: $" << sumTax
         << "\nSum of total orders: $" << sumTotalOrder << endl;

    return 0;
}