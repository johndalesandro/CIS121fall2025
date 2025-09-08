#include <iostream>
using namespace std;

int main() {
    double purchasePrice, currentPrice, percentChange;
    
    cout << "Enter purchase price: ";
    cin >> purchasePrice;
    cout << "Enter current price: ";
    cin >> currentPrice;
    
    percentChange = ((currentPrice - purchasePrice) / purchasePrice) * 100;
    
    cout << "Percentage change: " << percentChange << "%" << endl;
    return 0;
}