class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int freq=0,ans=0;
        // for(int i=0;i<nums.size();i++){
        //     if(freq==0){
        //         ans=nums[i];
        //     }
        //     if(ans==nums[i]){
        //         freq++;
        //     }
        //     else{
        //         freq--;
        //     }
        // }
        // return ans;

        // --------------------
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2];



        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto p:mp){
            if(p.second>n/2){
                return p.first;
            }
        }
        return 0;

    }
};