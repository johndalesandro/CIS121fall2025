#include <iostream>
#include <string>
using namespace std;

class ComputerAsset {
private:
    string make;
    string model;
    string cpu;
    string ram;
    string hardDrive;
    string type;

public:
    // Constructor with defaults
    ComputerAsset() {
        make = "Lenovo";
        model = "LE100A";
        cpu = "Intel";
        ram = "32GB";
        hardDrive = "HD";
        type = "Laptop";
    }

    // Setters
    void setMake(string m) { if (!m.empty()) make = m; }
    void setModel(string m) { if (!m.empty()) model = m; }
    void setCPU(string c) { if (!c.empty()) cpu = c; }
    void setRAM(string r) { if (!r.empty()) ram = r; }
    void setHardDrive(string h) { if (!h.empty()) hardDrive = h; }
    void setType(string t) { if (!t.empty()) type = t; }

    // Getters
    string getMake() { return make; }
    string getModel() { return model; }
    string getCPU() { return cpu; }
    string getRAM() { return ram; }
    string getHardDrive() { return hardDrive; }
    string getType() { return type; }

    // Cost Calculation
    double computeCost() {
        double cost = 0.0;

        // Make cost
        if (make == "Lenovo") cost += 1200;
        else if (make == "HP") cost += 1000;
        else if (make == "Apple") cost += 2000;

        // CPU cost
        if (cpu == "Intel") cost += 200;

        // RAM cost
        if (ram == "16GB") cost += 300;
        else if (ram == "32GB") cost += 500;

        // Hard drive cost
        if (hardDrive == "SSD") cost += 500;

        // Computer type adjustment
        if (type == "Laptop") cost += 300;
        else if (type == "Tablet") cost -= 200;

        return cost;
    }
};

int main() {
    ComputerAsset comp;

    while (true) {
        cout << "\n--- Enter Computer Information (Ctrl+Z to stop) ---\n";

        string input;

        cout << "Enter Make (Lenovo, HP, Apple): ";
        if (!(cin >> input)) break;
        comp.setMake(input);

        cout << "Enter Model (no spaces): ";
        cin >> input;
        comp.setModel(input);

        cout << "Enter CPU (Intel, AMD): ";
        cin >> input;
        comp.setCPU(input);

        cout << "Enter RAM (8GB, 16GB, 32GB): ";
        cin >> input;
        comp.setRAM(input);

        cout << "Enter Hard Drive (SSD, HD): ";
        cin >> input;
        comp.setHardDrive(input);

        cout << "Enter Computer Type (Laptop, Notebook, Tablet, Desktop): ";
        cin >> input;
        comp.setType(input);

        // Output all info
        cout << "\n--- Computer Information ---\n";
        cout << "Make: " << comp.getMake() << endl;
        cout << "Model: " << comp.getModel() << endl;
        cout << "CPU: " << comp.getCPU() << endl;
        cout << "RAM: " << comp.getRAM() << endl;
        cout << "Hard Drive: " << comp.getHardDrive() << endl;
        cout << "Type: " << comp.getType() << endl;

        cout << "Total Cost: $" << comp.computeCost() << "\n\n";
    }

    cout << "\nProgram Ended.\n";
    return 0;
}