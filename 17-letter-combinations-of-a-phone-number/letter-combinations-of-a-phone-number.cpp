class Solution {
public:
vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string>res;
void solve(string &digits,int idx,string temp){
    if(idx==digits.size()){
        res.push_back(temp);
        return;
    }
    string ans=mp[digits[idx]-'0'];
    for(char c:ans){
        solve(digits,idx+1,temp+c);
    } 
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return{};
        }
            solve(digits,0,"");
        
        return res;
        
    }
};