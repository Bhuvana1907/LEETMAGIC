class Solution {
public:
    int countEven(int num) {
        vector<int> res;

        for (int i = 1; i <= num; i++) {
            int n = i;
            int sum = 0;
            while (n > 0) {
                int ld = n % 10;
                sum += ld;
                n /= 10;
            }
            if (sum % 2 == 0) {
                res.push_back(i);
            }
        }

        return res.size();
    }
};