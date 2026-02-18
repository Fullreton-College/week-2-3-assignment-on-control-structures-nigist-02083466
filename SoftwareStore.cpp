#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PRICE = 199.0;
    int quantity;
    double discount = 0.0;

    cout << "Enter number of units purchased: ";
    cin >> quantity;

    if (quantity >= 10 && quantity <= 19)
        discount = 0.20;
    else if (quantity >= 20 && quantity <= 49)
        discount = 0.30;
    else if (quantity >= 50 && quantity <= 99)
        discount = 0.40;
    else if (quantity >= 100)
        discount = 0.50;

    double total = quantity * PRICE;
    double finalCost = total - (total * discount);

    cout << fixed << setprecision(2);
    cout << "Total cost: $" << finalCost << endl;

    return 0;
}
