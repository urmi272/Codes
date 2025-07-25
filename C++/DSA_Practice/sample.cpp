#include <iostream>
using namespace std;

class Customer {
private:
    int id;
    string lname;
    string fname;
    double credit;

public:
    void get_id(int ID) {
        id = ID;
    }
    void get_last_name(string l) {
        lname = l;
    }
    void get_first_name(string f) {
        fname = f;
    }
    void get_credit(double lmt) {
        credit = lmt;
    }
    void Display() {
        cout << "Customer id: " << id << endl;
        cout << "Customer's first name: " << fname << endl;
        cout << "Customer's last name: " << lname << endl;
        cout << "Customer's credit: " << credit << endl;
    }
};

int main() {
    Customer c;
    int i;
    string l, f;
    double cdt;
    cout << "\nEnter customer id: ";
    cin >> i;
    c.get_id(i);
    cout << "\nEnter customer's last name:";
    cin >> l;
    c.get_last_name(l);
    cout << "\nEnter customer's first name: ";
    cin >> f;
    c.get_first_name(f);

    cout << "\nEnter customer's credit and it cannot be more than 10000 dollars : ";
    cin >> cdt;
    if (cdt <= 10000) {
        c.get_credit(cdt);
    } else {
        cout << "Credit limit cannot be more than 10000 dollars." << endl;
        return 1; // Exit with an error code
    }

    c.Display();

    return 0;
}