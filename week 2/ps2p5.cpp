#include <iostream>
using namespace std;

int main() {
    double price, discountPercent, discountAmount, discountedPrice;

    cout << "Enter item price: ";
    cin >> price;
    cout << "Enter discount percent (in decimal form, e.g. 0.2 for 20%): ";
    cin >> discountPercent;

    discountAmount = price * discountPercent;
    discountedPrice = price - discountAmount;

    cout << "Discount amount: $" << discountAmount << endl;
    cout << "Discounted price: $" << discountedPrice << endl;
    return 0;
}