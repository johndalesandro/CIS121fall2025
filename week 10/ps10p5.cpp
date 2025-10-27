#include <iostream>
#include <cmath>
using namespace std;

void computeInvestment(double investment, double rate5, double rate10, double &fiveYear, double &tenYear) {
    fiveYear = investment * pow((1 + rate5), 5);
    tenYear = investment * pow((1 + rate10), 10);
}

int main() {
    double investment, rate5, rate10, fiveYear, tenYear;

    cout << "Enter investment amount, 5-year rate, and 10-year rate (Ctrl+Z to stop): ";
    while (cin >> investment >> rate5 >> rate10) {
        computeInvestment(investment, rate5, rate10, fiveYear, tenYear);

        cout << "Investment: $" << investment
             << "  Five-year amount: $" << fiveYear
             << "  Ten-year amount: $" << tenYear << endl;

        cout << "Enter investment amount, 5-year rate, and 10-year rate (Ctrl+Z to stop): ";
    }

    return 0;
}