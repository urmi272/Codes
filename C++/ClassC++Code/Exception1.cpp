#include <iostream>
using namespace std;
int main() {
    double numerator, denominator, divide, c;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    try {
        // throw an exception if denominator is 0
        if (denominator == 0)
            throw 0;
        // not executed if denominator is 0
        divide = numerator / denominator;
        cout << numerator << " / " << denominator << " = " << divide << endl;
    }
    catch (int num_exception) {
        cout << "Error: Cannot divide by " << num_exception << endl;
    }
    c=numerator + denominator;
    cout << numerator << " + " << denominator << " = " << c << endl;

    return 0;}

