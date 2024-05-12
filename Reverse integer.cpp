class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;  // Use long long to handle overflow cases
        int temp = abs(x);  // Work with the absolute value of x

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;  // Construct the reversed number
            temp /= 10;
        }

        // Check for overflow and return 0 if necessary
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }

        // Handle the sign of the original number
        return x < 0 ? -reversed : reversed;
    }
};
