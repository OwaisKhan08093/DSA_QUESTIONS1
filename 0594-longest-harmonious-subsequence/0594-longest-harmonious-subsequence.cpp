class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto val:nums){
            mp[val]++;
        }
        int ans=0;
        for(auto &p:mp){
            int x=p.first;
            if (mp.count(x + 1)) {
                ans = max(ans, mp[x] + mp[x + 1]);
            }
        }
        return ans;
    }
};