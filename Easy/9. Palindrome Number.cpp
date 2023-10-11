class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        int size = y.length();
        for (int i = 0; i < size / 2; i++) {
            if (y[i] != y[size - i - 1]) {
                return false;
            }
        }
        return true;
    }
};