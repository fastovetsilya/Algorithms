#include <iostream>

using namespace std;

double computeInterest(double base_val, double rate, int years) {
    double final_multiplier; //Should be initialized to 1

    for(int i=0; i<years; i++) {
        final_multiplier *= (1 + rate);
    }

    return base_val * final_multiplier;
}

int main() {
    double base_val;
    double rate;
    int years;
    cout << "Enter a base value: ";
    cin >> base_val;
    cout << "Enter an interest rate: ";
    cin >> rate;
    cout << "Enter the number of years to compound: ";
    cin >> years;
    cout << "After " << years << " year(s)"<< " you will have "
    << computeInterest(base_val, rate, years) << " money" << endl;

    return 0;
}
