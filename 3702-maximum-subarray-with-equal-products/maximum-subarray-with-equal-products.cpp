class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
       int ans = 0;
        for (int i = 0; i < n; i++) {
             long long product = nums[i];
            long long  gcd_res = nums[i];
            long long lcm_res = nums[i];
            for (int j = i+1; j < n; j++) {
                product =product * nums[j];
                gcd_res = gcd(gcd_res, nums[j]);
             lcm_res = (lcm_res / gcd(lcm_res, nums[j])) * nums[j];
                if(product>gcd_res*lcm_res){
                    break;
                }
                if (product == gcd_res * lcm_res) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};