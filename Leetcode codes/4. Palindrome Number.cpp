//https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; // Negative numbers are not palindromic
        }

        // Reverse the integer
        long long reversed = 0;
        int original = x;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // Check if the reversed integer is the same as the original
        return reversed == original;
    }
}


// option: 2
// class Solution {
// public:
//     bool isPalindrome(int x) {
// Convert the integer to a string
//         string str = to_string(x);

// Use two pointers to check if the string is a palindrome
//         int left = 0, right = str.length() - 1;

//         while (left < right) {
//             if (str[left] != str[right]) {
//                 return false; // Characters do not match, not a palindrome
//             }
//             left++;
//             right--;
//         }

//         return true; // Palindrome
//     }
// };
