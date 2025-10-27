#include <iostream>
using namespace std;

double findAreaCharge(int zip) {
    if (zip == 60171)
        return 2.00;
    else if (zip == 60172)
        return 2.50;
    else if (zip == 60635)
        return 3.00;
    else
        return 5.00;
}

double findWeightRate(double weight) {
    if (weight > 100)
        return 0.02;
    else if (weight > 50)
        return 0.03;
    else
        return 0.05;
}

void computePostage(double weight, int zip, double &weightCharge, double &areaCharge, double &postage) {
    double rate = findWeightRate(weight);
    weightCharge = weight * rate;
    areaCharge = findAreaCharge(zip);
    postage = weightCharge + areaCharge;
}

int main() {
    double weight, weightCharge, areaCharge, postage;
    int zip, count = 0;

    cout << "Enter package weight and zip code (Ctrl+Z to stop): ";
    while (cin >> weight >> zip) {
        computePostage(weight, zip, weightCharge, areaCharge, postage);
        count++;

        cout << "Area Charge: $" << areaCharge
             << "  Weight Charge: $" << weightCharge
             << "  Postage: $" << postage << endl;

        cout << "Enter package weight and zip code (Ctrl+Z to stop): ";
    }

    cout << "\nNumber of entries made: " << count << endl;
    return 0;
}