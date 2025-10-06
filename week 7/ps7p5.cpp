#include <iostream>
#include <string>
using namespace std;

int main() {
    string lname, district;
    int credits, students = 0, totalCredits = 0;
    double rate, tuition, totalTuition = 0;

    while (cin >> lname >> credits >> district) {
        if (district == "I") rate = 250;
        else if (district == "O") rate = 550;
        else rate = 0;

        tuition = credits * rate;
        totalTuition += tuition;
        totalCredits += credits;
        students++;

        cout << "Student: " << lname 
             << " Credits: " << credits
             << " District: " << district
             << " Tuition: " << tuition << endl;
    }

    cout << "Total Tuition: " << totalTuition
         << " Total Credits: " << totalCredits
         << " Students: " << students << endl;
    return 0;
}