class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
  string res=s;
  sort(res.begin(),res.end());
  return res==s;

        
    }
};