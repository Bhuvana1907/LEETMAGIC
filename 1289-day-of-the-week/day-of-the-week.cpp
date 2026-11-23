class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string>name={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if(month<3){
            month+=12;
            year--;
        }
        int k=year%100;
        int j=year/100;
        //h=(d+[13(m+1)/5]+k+[k/4]+[j/4]+5j)mod7;
        int h=(day+(13*(month+1))/5+k+k/4+j/4+5*j)%7;
        int res=(h+6)%7;
        return name[res];
        
    }
};