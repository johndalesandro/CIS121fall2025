#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    double miles, gallons, totalMiles = 0;
    int trips = 0;

    while (cin >> city >> miles >> gallons) {
        double mpg = miles / gallons;
        totalMiles += miles;
        trips++;
        cout << "City: " << city << " MPG: " << mpg << endl;
    }

    cout << "Total Miles: " << totalMiles << " Trips: " << trips << endl;
    return 0;
}