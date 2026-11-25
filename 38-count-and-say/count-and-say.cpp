class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for(int i=1;i<n;i++){
            string res="";
            int j=0;
            while(j<s.length()){
                int cnt=1;
                while(j+1<s.length() && s[j]==s[j+1]){
                    cnt++;
                    j++;
                }
                res+=to_string(cnt);
                res+=s[j];
                j++;
            }
            s=res;
        }
        return s;
        
    }
};