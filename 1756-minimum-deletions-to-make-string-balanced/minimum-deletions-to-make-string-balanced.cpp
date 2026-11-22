class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        int cnt = 0;
        int remove = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b') {
                cnt++;
            } else {
                remove = min(remove + 1, cnt);
            }
        }
        return remove;
    }
};