#include <iostream>
#include "Manager.h"   // <-- THIS connects the whole system

using namespace std;

int main()
{
    Manager boss;

    // set values
    boss.FirstName("John");
    boss.LastName("Doe");
    boss.Salary(80000);

    // output
    cout << "Manager Info\n\n";
    cout << "First Name: " << boss.FirstName() << endl;
    cout << "Last Name:  " << boss.LastName() << endl;
    cout << "Salary:     $" << boss.Salary() << endl;

    cout << "Bonus Override: $" << boss.Bonus() << endl;
    cout << "Long-Term Bonus: $" << boss.Long_Term_Bonus() << endl;

    return 0;
}