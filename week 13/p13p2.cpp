#include <iostream>
#include <vector>
using namespace std;

struct Employee
{
    string first;
    string last;
    double hours;
    double rate;
    double gross;
};

double computeGross(double hours, double rate)
{
    if(hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> list(n);

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i+1 << endl;
        cout << "First name: ";
        cin >> list[i].first;

        cout << "Last name: ";
        cin >> list[i].last;

        cout << "Hours worked: ";
        cin >> list[i].hours;

        cout << "Rate of pay: ";
        cin >> list[i].rate;

        list[i].gross = computeGross(list[i].hours, list[i].rate);
    }

    cout << "\n--- Employee Report ---\n";
    for(int i = 0; i < n; i++)
    {
        cout << list[i].first << " "
             << list[i].last << "  Hours: "
             << list[i].hours << "  Rate: "
             << list[i].rate << "  Gross: $"
             << list[i].gross << endl;
    }

    return 0;
}