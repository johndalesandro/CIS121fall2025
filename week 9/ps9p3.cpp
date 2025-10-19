#include <iostream>
#include <string>
using namespace std;

double computeMPG(double miles, double gallons) {
    return miles / gallons;
}

double computeCost(double gallons) {
    return gallons * 3.50;
}

int main() {
    string city;
    double miles, gallons, mpg, cost, totalCost = 0;

    cout << "Enter city, miles, and gallons (Ctrl+Z to stop): " << endl;

    while (cin >> city >> miles >> gallons) {
        mpg = computeMPG(miles, gallons);
        cost = computeCost(gallons);
        cout << city << " - MPG: " << mpg << ", Gas Cost: $" << cost << endl;
        totalCost += cost;
    }

    cout << "\nTotal gas cost for all trips: $" << totalCost << endl;
    return 0;
}