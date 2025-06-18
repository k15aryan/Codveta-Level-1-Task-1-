#include <iostream>
#include <cstring>
using namespace std;

// Function to reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]);
    }
}

// Function to count vowels in a string
int countVowels(const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

// Function to check if string is a palindrome
bool isPalindrome(const char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Take input with spaces

    // Display original string
    cout << "\nOriginal String: " << str << endl;

    // Count vowels
    cout << "Number of vowels: " << countVowels(str) << endl;

    // Check palindrome
    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    // Reverse the string
    reverseString(str);
    cout << "Reversed String: " << str << endl;

    return 0;
}
