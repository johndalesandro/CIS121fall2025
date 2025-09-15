#include <iostream>
using namespace std;

int main() {
    char item;
    int quantity;
    double unitPrice, extendedPrice;

    cout << "Enter item (A or B): ";
    cin >> item;
    cout << "Enter quantity: ";
    cin >> quantity;

    if (item == 'A' || item == 'a')
        unitPrice = 10.0;
    else if (item == 'B' || item == 'b')
        unitPrice = 20.0;
    else {
        cout << "Invalid item." << endl;
        return 0;
    }

    extendedPrice = quantity * unitPrice;

    cout << "Item: " << item << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Extended Price: $" << extendedPrice << endl;

    return 0;
}