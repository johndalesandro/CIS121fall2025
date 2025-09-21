#include <iostream>
using namespace std;

int main() {
    double weight, rate, total;

    cout << "Enter weight of metal (lbs): ";
    cin >> weight;

    if (weight > 100)
        rate = 0.50;
    else if (weight >= 30)
        rate = 0.25;
    else if (weight >= 20)
        rate = 0.20;
    else
        rate = 0.10;

    total = weight * rate;

    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Rate per pound: $" << rate << endl;
    cout << "Total payout: $" << total << endl;
}