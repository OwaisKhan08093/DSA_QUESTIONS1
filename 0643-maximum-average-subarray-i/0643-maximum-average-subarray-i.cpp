class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start = 0;
        double windowSum = 0;
        double mxavg=INT_MIN;
        for(int end = 0; end < nums.size(); end++) {
            windowSum += nums[end];
            if(end - start + 1 == k) {
                mxavg=max(mxavg,windowSum);
                windowSum -= nums[start];
                start += 1;
            }
        }
        return mxavg/k;
    }
};