#include <iostream>
#include <iomanip>
using namespace std;

double compute_mpg(double miles, double gallons) {
    return miles / gallons;
}

int main() {
    string city;
    double miles, gallons, mpg, total_miles = 0;
    int trips = 0;

    cout << "Enter city, miles traveled, and gallons used (Ctrl+Z to stop):\n";
    while (cin >> city >> miles >> gallons) {
        mpg = compute_mpg(miles, gallons);
        cout << "City: " << city << " MPG: " << fixed << setprecision(2) << mpg << endl;
        total_miles += miles;
        trips++;
    }

    cout << "\nTotal miles: " << total_miles << endl;
    cout << "Total trips: " << trips << endl;
    return 0;
}
