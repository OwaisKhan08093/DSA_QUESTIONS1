class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        vector<int> prefSum(103,0);
        for(auto num:nums){
            int left=num[0];
            int right=num[1];
            prefSum[left]+=1;
            prefSum[right+1]-=1;
        }    
        int count=0;    
        for(int i=1;i<=102;i++){
            prefSum[i]+=prefSum[i-1];
             if(prefSum[i]!=0){
                count++;
            }
        }
        return count;


    }
};