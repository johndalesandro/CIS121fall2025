#include <iostream>
using namespace std;

int main() {
    int books;
    double costPerBook, orderTotal, shipping, total;

    cout << "Enter number of books: ";
    cin >> books;
    cout << "Enter cost per book: ";
    cin >> costPerBook;

    orderTotal = books * costPerBook;

    if (orderTotal > 50.0)
        shipping = 0.0;
    else
        shipping = 25.0;

    total = orderTotal + shipping;

    cout << "Order Total: $" << orderTotal << endl;
    cout << "Shipping: $" << shipping << endl;
    cout << "Final Total: $" << total << endl;

    return 0;
}