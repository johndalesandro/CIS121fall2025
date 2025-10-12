#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double find_lab_fee(string dept, int code)
{
    if (dept == "CIS" && code == 101)
        return 50.00;
    else if (dept == "CIS" && code == 121)
        return 100.00;
    else if (dept == "MAT" && code == 111)
        return 25.00;
    else if (dept == "MAT" && code == 112)
        return 35.00;
    else if (dept == "ENG" && code == 100)
        return 55.00;
    else
        return 50.00;
}

int main()
{
    string dept;
    int code;
    double fee, total_fees = 0, average;
    int count = 0;

    cout << fixed << setprecision(2);

    while (true)
    {
        cout << "Enter department (or Ctrl+Z / zzz to stop): ";
        if (!(cin >> dept) || dept == "zzz")
            break;

        cout << "Enter course code: ";
        cin >> code;

        fee = find_lab_fee(dept, code);
        cout << "Department: " << dept << " | Course: " << code
             << " | Lab Fee: $" << fee << endl;

        total_fees += fee;
        count++;
    }

    if (count > 0)
    {
        average = total_fees / count;
        cout << "\nTotal Lab Fees: $" << total_fees << endl;
        cout << "Average Lab Fee: $" << average << endl;
    }
    else
    {
        cout << "\nNo entries made.\n";
    }

    return 0;
}