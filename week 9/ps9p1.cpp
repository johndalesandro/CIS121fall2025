#include <iostream>
using namespace std;

double computeTotal(double qty, double price) {
    return qty * price;
}

double applyDiscount(double total) {
    double discountRate = (total > 10000) ? 0.10 : 0.05;
    return total - (total * discountRate);
}

int main() {
    double qty, price, total, discountedTotal, grandTotal = 0;
    cout << "Enter quantity and price (Ctrl+Z to stop): " << endl;

    while (cin >> qty >> price) {
        total = computeTotal(qty, price);
        discountedTotal = applyDiscount(total);
        cout << "Total: $" << total << "  Discounted Total: $" << discountedTotal << endl;
        grandTotal += discountedTotal;
    }

    cout << "\nSum of all discounted totals: $" << grandTotal << endl;
    return 0;
}