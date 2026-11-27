class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>res;
        for(auto x:mp){
            if(x.second==1){
                res.push_back(x.first);

            }
        }
        return res;
        
    }
};