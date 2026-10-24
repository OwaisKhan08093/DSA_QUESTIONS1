class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long mxSum=0;
        long long Sum=0;
        int st=0;
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int end=0;end<n;end++){
            Sum+=nums[end];
            mp[nums[end]]++;
            if(end-st+1>k){
                Sum-=nums[st];
                mp[nums[st]]--;
                if(mp[nums[st]]==0){
                    mp.erase(nums[st]);
                }
                st++;
            }
            if((end-st+1)==k&&mp.size()==k){
                mxSum=max(Sum,mxSum);
            }
            
        }
        return mxSum;

        
    }
};