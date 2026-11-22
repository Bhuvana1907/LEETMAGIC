class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        int sign = 1;
        for (char c : s) {
            sum += (c - '0') * sign;
            sign=-sign;
        }

        return sum;
    }
};