#include <iostream>
#include <iomanip>
using namespace std;

double get_price(char code) {
    if (code == 'W') return 10;
    else if (code == 'C') return 15;
    else if (code == 'G') return 20;
    return 0;
}

double get_shipping(char code) {
    if (code == 'W') return 2;
    else if (code == 'C') return 5;
    else if (code == 'G') return 7;
    return 0;
}

int main() {
    char code;
    int qty, count = 0;
    double price, ship, ext, total = 0;

    cout << "Enter product code and quantity (Ctrl+Z to stop):\n";
    while (cin >> code >> qty) {
        price = get_price(code);
        ship = get_shipping(code);
        ext = (price * qty) + ship;

        cout << "Product: " << code 
             << " | Price: $" << price 
             << " | Shipping: $" << ship 
             << " | Total: $" << fixed << setprecision(2) << ext << endl;

        total += ext;
        count++;
    }

    cout << "\nGrand Total: $" << total << " | Orders Entered: " << count << endl;
    return 0;
}