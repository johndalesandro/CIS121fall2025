#include <iostream>
using namespace std;

int main() {
    int volume;
    char location;
    double price, total;

    cout << "Enter number of tickets: ";
    cin >> volume;
    cout << "Enter location (H or L): ";
    cin >> location;

    if (volume > 25 && location == 'H')
        price = 30;
    else if (volume >= 10 && volume <= 24 && location == 'L')
        price = 40;
    else
        price = 50;

    total = price * volume;

    cout << "Number of tickets: " << volume << endl;
    cout << "Price per ticket: $" << price << endl;
    cout << "Total cost: $" << total << endl;

    return 0;
}