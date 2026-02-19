#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PLAN_A_PRICE = 39.99;
    const double PLAN_B_PRICE = 59.99;
    const double PLAN_C_PRICE = 79.99;
    const double EXTRA_COST = 8.00;

    const double PLAN_A_GB = 2.0;
    const double PLAN_B_GB = 8.0;

    string name;
    char plan;
    double gbUsed;
    double bill = 0.0;

    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter plan (A, B, or C): ";
    cin >> plan;

    cout << "Enter gigabytes used: ";
    cin >> gbUsed;

    plan = toupper(plan);

    if (plan == 'A') {
        bill = PLAN_A_PRICE;
        if (gbUsed > PLAN_A_GB)
            bill += (gbUsed - PLAN_A_GB) * EXTRA_COST;
    }
    else if (plan == 'B') {
        bill = PLAN_B_PRICE;
        if (gbUsed > PLAN_B_GB)
            bill += (gbUsed - PLAN_B_GB) * EXTRA_COST;
    }
    else if (plan == 'C') {
        bill = PLAN_C_PRICE;
    }
    else {
        cout << "Invalid plan selected." << endl;
        return 0;
    }

    cout << fixed << setprecision(2);
    cout << "\nCustomer: " << name << endl;
    cout << "Plan: " << plan << endl;
    cout << "Data used: " << gbUsed << " GB" << endl;
    cout << "Total amount due: $" << bill << endl;

    // Savings calculations
    if (plan == 'A') {
        double costB = PLAN_B_PRICE;
        if (gbUsed > PLAN_B_GB)
            costB += (gbUsed - PLAN_B_GB) * EXTRA_COST;

        double costC = PLAN_C_PRICE;

        if (bill > costB)
            cout << "Savings with Plan B: $" << bill - costB << endl;
        if (bill > costC)
            cout << "Savings with Plan C: $" << bill - costC << endl;
    }
    else if (plan == 'B') {
        double costC = PLAN_C_PRICE;
        if (bill > costC)
            cout << "Savings with Plan C: $" << bill - costC << endl;
    }

    return 0;
}
