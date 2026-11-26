class Solution {
public:
    bool canAliceWin(int n) {
        int pre=10;
        int cnt=0;
        while(n>=pre){
            n-=pre;
            pre--;
            cnt++;
        }
        if(cnt%2==1){
            return true;
        }
        else{
            return false;
        }
        
    }
};