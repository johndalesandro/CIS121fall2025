#include <iostream>
using namespace std;

int main() {
    double price, quantity, value;
    
    cout << "Enter current stock price: ";
    cin >> price;
    cout << "Enter quantity of stock: ";
    cin >> quantity;
    
    value = price * quantity;
    
    cout << "Current value of your stock = $" << value << endl;
    return 0;
}

