#include <iostream>
using namespace std;

int count(long long n){
    int count = 0; // Initialize count for each digit
    cout<< "Extracting digit in reverse order: " << endl;
    while(n>0){
        int digit = n % 10; // Get the last digit
        cout << digit << " "; // Print the digit
        count++; // Increment count for the digit
        n = n / 10; // Remove the last digit
    }
    return count;
}

int main(){
    long long x;
    cout << "Enter a number: ";
    cin >> x;
    int result = count(x);
    cout << "\nTotal digits: " << result << endl; // Print the total count
}