class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int count=0;
        int sum=0;
        int st=0;

        for(int end=0;end<arr.size();end++){
            sum+=arr[end];
            if(end-st+1==k){
                if(sum>=k*threshold){
                    count++;
                }

                sum-=arr[st];
                st++;
            }
        }
        return count;
    }
};