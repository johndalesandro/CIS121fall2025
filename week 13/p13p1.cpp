#include <iostream>
#include <vector>
using namespace std;

void displayCars(vector<string> make, vector<string> model, int size)
{
    cout << "\nList of Cars Entered:\n";
    for(int i = 0; i < size; i++)
    {
        cout << "Car " << i+1 << ": "
             << make[i] << " " << model[i] << endl;
    }
}

int main()
{
    int size;
    cout << "Enter number of cars: ";
    cin >> size;

    vector<string> make(size);
    vector<string> model(size);

    for(int i = 0; i < size; i++)
    {
        cout << "Enter make for car " << i+1 << ": ";
        cin >> make[i];
    }

    for(int i = 0; i < size; i++)
    {
        cout << "Enter model for car " << i+1 << ": ";
        cin >> model[i];
    }

    displayCars(make, model, size);

    return 0;
}