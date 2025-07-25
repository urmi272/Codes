#include <climits>
#include <iostream>
using namespace std;
int reverse(int x) {
        int lastdigit;
        long long rev = 0;
        
        while(x!=0){
            lastdigit = x%10;
            x/=10;     
            rev = rev*10 + lastdigit;
        }
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0; // Return 0 if overflow occurs
        }
        return (int)rev;
}
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int result = reverse(x);
    cout << "Reversed number: " << result << endl; // Print the reversed number
}