class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int count=0;
        for(int i=2;i<n;i++){
            int currdiff=nums[i]-nums[i-1];
            int prevdiff=nums[i-1]-nums[i-2];
            if(currdiff==prevdiff){
                count++;
                ans+=count;
            }
            else{
                count=0;
            }
        }
        return ans;

        
    }
};