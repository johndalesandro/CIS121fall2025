#include <iostream>
using namespace std;

int main() {
    double pounds, pricePerPound, total;

    cout << "Enter pounds of apples: ";
    cin >> pounds;

    if (pounds > 100)
        pricePerPound = 0.10;
    else if (pounds >= 50)
        pricePerPound = 0.25;
    else
        pricePerPound = 0.50;

    total = pounds * pricePerPound;

    cout << "Price per pound: $" << pricePerPound << endl;
    cout << "Total cost: $" << total << endl;
}