#include <iostream>
using namespace std;

int main() {
    double exam1, exam2, total;
    
    cout << "Enter score for Exam 1: ";
    cin >> exam1;
    cout << "Enter score for Exam 2: ";
    cin >> exam2;
    
    total = (exam1 * 0.6) + (exam2 * 0.4);
    
    cout << "Total score = " << total << endl;
    return 0;
}