#include <iostream>
using namespace std;

int main() {
    char equipCode, dayCode;
    double cost = 0.0;

    cout << "Enter equipment code (A, B, C): ";
    cin >> equipCode;
    cout << "Enter day code (F = Full, H = Half): ";
    cin >> dayCode;

    // Normalize inputs
    if (equipCode >= 'a' && equipCode <= 'z') equipCode = equipCode - 'a' + 'A';
    if (dayCode >= 'a' && dayCode <= 'z') dayCode = dayCode - 'a' + 'A';

    if (equipCode == 'A') {
        if (dayCode == 'F') cost = 10.0;
        else if (dayCode == 'H') cost = 15.0;
    } 
    else if (equipCode == 'B') {
        if (dayCode == 'F') cost = 20.0;
        else if (dayCode == 'H') cost = 35.0;
    }
    else if (equipCode == 'C') {
        if (dayCode == 'H') cost = 40.0;
        else if (dayCode == 'F') cost = 45.0;
    }
    else {
        cost = 50.0; // All others
    }

    cout << "\nEquipment Code: " << equipCode << endl;
    cout << "Day Code: " << dayCode << endl;
    cout << "Rental Cost: $" << cost << endl;

    return 0;
}