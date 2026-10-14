class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};

        // ------------------------






        // -----------------------------
        // unordered_map<int,int> mp;

        // for(int i=0;i<nums.size();i++){
        //     int need=target-nums[i];
        //     if(mp.find(need)!=mp.end()){
        //         return {mp[need],i};
        //     }
        //     mp[nums[i]]=i;
        // }
        // return {};


        vector<pair<int,int>> v;
        for(int k=0;k<n;k++){
            v.push_back({nums[k],k});
        }
        sort(v.begin(),v.end());
        int i=0,j=n-1;
        while(i<j){
            if(v[i].first+v[j].first==target){
                return {v[i].second,v[j].second};
            }
            if(v[i].first+v[j].first<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};

       
    
    }
};