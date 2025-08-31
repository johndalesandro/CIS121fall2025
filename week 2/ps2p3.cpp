#include <iostream>
using namespace std;

int main() {
    double length, width, area, circumference;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    area = length * width;
    circumference = 2 * (length + width);

    cout << "Area: " << area << ", Circumference: " << circumference << endl;
    return 0;
}