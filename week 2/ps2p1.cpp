#include <iostream>
using namespace std;

int main() {
    int quantity;
    double price, extendedPrice;

    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> price;

    extendedPrice = quantity * price;

    cout << "Extended price: $" << extendedPrice << endl;
    return 0;
}