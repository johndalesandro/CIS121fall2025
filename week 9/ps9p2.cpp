#include <iostream>
#include <string>
using namespace std;

double battingAverage(int hits, int atBats) {
    if (atBats == 0) return 0;
    return static_cast<double>(hits) / atBats;
}

int main() {
    string lastName;
    int hits, atBats, playerCount = 0;
    double average;

    cout << "Enter player's last name, hits, and at-bats (Ctrl+Z to stop): " << endl;

    while (cin >> lastName >> hits >> atBats) {
        average = battingAverage(hits, atBats);
        cout << lastName << " has a batting average of " << average << endl;
        playerCount++;
    }

    cout << "\nTotal number of players entered: " << playerCount << endl;
    return 0;
}