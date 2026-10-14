class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2);
        int n=matches.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[matches[i][0]]+=0;
            mp[matches[i][1]]++;   
        }
        for(auto p:mp){
            if(p.second==0){
                ans[0].push_back(p.first);
            }
            if(p.second==1){
                ans[1].push_back(p.first);
            }
        }
        return ans;
        
        
    }
};