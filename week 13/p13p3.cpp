#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string first;
    string last;
    char district;
    int credits;
    double tuition;
};

double compute_tuition(char district, int credits) {
    if (district == 'I' || district == 'i')
        return credits * 250.00;
    else
        return credits * 500.00;
}

int main() {
    vector<Student> list;
    Student temp;

    double total_tuition = 0;
    int count = 0;

    cout << "Enter first name (Ctrl+Z to stop): ";
    while (cin >> temp.first) {
        cout << "Enter last name: ";
        cin >> temp.last;

        cout << "Enter district code (I or O): ";
        cin >> temp.district;

        cout << "Enter credits taken: ";
        cin >> temp.credits;

        // compute tuition
        temp.tuition = compute_tuition(temp.district, temp.credits);

        // store in vector
        list.push_back(temp);

        // totals
        total_tuition += temp.tuition;
        count++;

        cout << "\nEnter first name (Ctrl+Z to stop): ";
    }

    // DISPLAY RESULTS
    cout << "\n--- Student Tuition Report ---\n";
    for (int i = 0; i < list.size(); i++) {
        cout << list[i].first << " " << list[i].last
             << "  District: " << list[i].district
             << "  Credits: " << list[i].credits
             << "  Tuition: $" << list[i].tuition << endl;
    }

    if (count > 0) {
        cout << "\nTotal tuition: $" << total_tuition << endl;
        cout << "Number of students: " << count << endl;
        cout << "Average tuition: $" << total_tuition / count << endl;
    }

    return 0;
}