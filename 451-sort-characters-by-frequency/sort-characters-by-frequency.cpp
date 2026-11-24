class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        vector<char>res;
        for(auto x: mp){
            res.push_back(x.first);
        }
        sort(res.begin(),res.end(),[&](char a, char b){
            return mp[a]>mp[b];
        });
        string ans="";
        for(char c:res){
            ans+=string(mp[c],c);
        }
        return ans;
        
    }
};