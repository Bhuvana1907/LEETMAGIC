class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1 = 0;
        int n1 = num;
        while (n1 > 0) {
            rev1 = rev1 * 10 +n1 % 10;

            n1 /= 10;
        }

        int rev2 = 0;
        int n2 = rev1;
        while (n2 > 0) {
            rev2 = rev2 * 10 + n2 % 10;

            n2 /= 10;
        }
        return (rev2==num);
    }
};
