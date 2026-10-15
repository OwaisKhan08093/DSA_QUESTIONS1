class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n+2,0);
        int m=bookings.size();
        for(auto book:bookings){
            int first=book[0];
            int last=book[1];
            int seats=book[2];
            ans[first]+=seats;
            ans[last+1]-=seats;
        }
        vector<int> prefSum(n,0);
        prefSum[0]=ans[1];
        for(int i=1;i<n;i++){
            prefSum[i]=prefSum[i-1]+ans[i+1];
        }
        return prefSum;
        
    }
};