class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        long long num=x;
        while(num>0){
            rev=rev*10+num%10;
            num/=10;
        }
        while(num<0){
            rev=rev*10+num%10;
            num/=10;
        }
        if(rev<INT_MIN || rev>INT_MAX){
            return 0;
        }

        return rev;
        
    }
};