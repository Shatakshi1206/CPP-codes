class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            // Counting digits in x
            int co = 0;
            int n = x;
            while (n != 0) {
                n /= 10;
                co++;
            }

            // Initialize vector with size equal to the number of digits
            std::vector<int> arr(co);

            n = x;
            int k = 0;
            while (n != 0) {
                arr[k] = n % 10;
                n /= 10;
                k++;
            }

            // Checking palindrome
            int i = 0;
            int j = co - 1;
            while (i <= j) {
                if (arr[i] == arr[j]) {
                    i++;
                    j--;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
