#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + digit;  // Add the digit to reversedNum
        num /= 10;  // Remove the last digit from num
    }

    // Check if the original number is equal to the reversed number
    return originalNum == reversedNum;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome number." << endl;
    } else {
        cout << num << " is not a palindrome number." << endl;
    }

    return 0;
}
