#include <iostream>
using namespace std;

int main() {
    double meal, tip, grandTotal;
    
    cout << "Enter meal total: ";
    cin >> meal;
    
    tip = meal * 0.15;
    grandTotal = meal + tip;
    
    cout << "Meal total: $" << meal << endl;
    cout << "Tip (15%): $" << tip << endl;
    cout << "Total with tip: $" << grandTotal << endl;
    return 0;
}