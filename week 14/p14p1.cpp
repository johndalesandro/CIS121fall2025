#include <iostream>
#include <string>
using namespace std;

class Membership {
private:
    string firstName;
    string lastName;
    int age;
    string type;

public:
    // Constructor with default values
    Membership() {
        firstName = "Not Entered";
        lastName  = "Not Entered";
        age = 18;
        type = "Bronze";
    }

    // Setters
    void setFirstName(string f) {
        if (f == "") firstName = "Not Entered";
        else firstName = f;
    }

    void setLastName(string l) {
        if (l == "") lastName = "Not Entered";
        else lastName = l;
    }

    void setAge(int a) {
        if (a > 0) age = a;
        else age = 18;   // default
    }

    void setType(string t) {
        if (t == "Gold" || t == "Silver" || t == "Bronze")
            type = t;
        else
            type = "Bronze";  // default
    }

    // Compute membership cost
    double getCost() {
        double cost;

        if (type == "Gold") cost = 1200.00;
        else if (type == "Silver") cost = 1000.00;
        else cost = 500.00;   // Bronze

        if (age > 50)
            cost *= 0.90;  // 10% discount

        return cost;
    }

    // Display all data
    void display() {
        cout << "\n--- Membership Info ---\n";
        cout << "First Name: " << firstName << endl;
        cout << "Last Name:  " << lastName << endl;
        cout << "Age:        " << age << endl;
        cout << "Type:       " << type << endl;
        cout << "Cost:       $" << getCost() << endl;
        cout << "------------------------\n\n";
    }
};

int main() {
    Membership m;
    string fn, ln, t;
    int a;

    cout << "Press Ctrl+Z at any prompt to end program.\n\n";

    while (true) {
        cout << "Enter first name: ";
        if (!(cin >> fn)) break;
        m.setFirstName(fn);

        cout << "Enter last name: ";
        if (!(cin >> ln)) break;
        m.setLastName(ln);

        cout << "Enter age: ";
        if (!(cin >> a)) break;
        m.setAge(a);

        cout << "Enter membership type (Gold, Silver, Bronze): ";
        if (!(cin >> t)) break;
        m.setType(t);

        m.display();
    }

    cout << "\nProgram ended.\n";
    return 0;
}