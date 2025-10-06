#include <iostream>
#include <string>
using namespace std;

int main() {
    string lname;
    int hits, atBats, count = 0;

    while (cin >> lname >> hits >> atBats) {
        double average = (double)hits / atBats;
        count++;
        cout << "Player: " << lname << " Average: " << average << endl;
    }

    cout << "Total number of players: " << count << endl;
    return 0;
}