#include <iostream>
using namespace std;

int main() {
    int qty;
    double price, extended, discount, discounted, total = 0;

    while (cin >> qty >> price) {
        extended = qty * price;
        if (qty > 1000)
            discount = extended * 0.10;
        else
            discount = 0;

        discounted = extended - discount;
        total += discounted;

        cout << "Quantity: " << qty 
             << " Price: " << price
             << " Extended: " << extended
             << " Discount: " << discount
             << " Discounted Price: " << discounted << endl;
    }

    cout << "Total of Discounted Prices: " << total << endl;
    return 0;
}