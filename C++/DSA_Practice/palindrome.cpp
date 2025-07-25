#include <iostream> 
#include <string> 
#include <cctype>   // Required for character manipulation functions like isalnum, tolower
using namespace std;
bool isPalindrome(string s) {
    string cleaned_s; 
    for (char c : s) {
        // Check if the character is alphanumeric (letter or number)
        if (isalnum(c)) {
            // If it's alphanumeric, convert it to lowercase and append to cleaned_s
            cleaned_s += tolower(c);
        }
    }
    int left = 0;
    int right = cleaned_s.length() - 1;
    while (left < right) {
        if (cleaned_s[left] != cleaned_s[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    // Test cases
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = " ";
    string s4 = "Madam";
    string s5 = "12321";
    string s6 = "0P"; 
    cout << "\"" << s2 << "\" is a palindrome: " << (isPalindrome(s2) ? "true" : "false") << endl;
    cout << "\"" << s1 << "\" is a palindrome: " << (isPalindrome(s1) ? "true" : "false") << endl;
    cout << "\"" << s3 << "\" is a palindrome: " << (isPalindrome(s3) ? "true" : "false") << endl;
    cout << "\"" << s4 << "\" is a palindrome: " << (isPalindrome(s4) ? "true" : "false") << endl;
    cout << "\"" << s5 << "\" is a palindrome: " << (isPalindrome(s5) ? "true" : "false") << endl;
    cout << "\"" << s6 << "\" is a palindrome: " << (isPalindrome(s6) ? "true" : "false") << endl;

    return 0;
}
