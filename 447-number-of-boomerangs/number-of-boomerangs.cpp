class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int res=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>mp;
            for(int j=0;j<n;j++){
                int x=points[i][0]-points[j][0];
                int y=points[i][1]-points[j][1];
                int dist=x*x+y*y;
                res+=2*mp[dist];
                mp[dist]++;
            }
        }
        return res;
        
    }
};