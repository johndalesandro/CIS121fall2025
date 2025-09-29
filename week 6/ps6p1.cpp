#include <iostream>
using namespace std;

int main() {
    int qty;
    char status;
    double price, extended, tax, total;

    cout << "Enter quantity of widgets: ";
    cin >> qty;
    cout << "Enter customer status (A, B, C, D): ";
    cin >> status;

    if (qty > 10000 && status == 'A')
        price = 10;
    else if (qty > 10000 && status == 'B')
        price = 12;
    else if (qty >= 5000 && qty <= 10000 && status == 'C')
        price = 20;
    else if (qty >= 5000 && qty <= 10000 && status == 'D')
        price = 22;
    else if (qty < 5000)
        price = 30;
    else
        price = 0;

    extended = qty * price;
    tax = extended * 0.07;
    total = extended + tax;

    cout << "Extended Price: $" << extended << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}