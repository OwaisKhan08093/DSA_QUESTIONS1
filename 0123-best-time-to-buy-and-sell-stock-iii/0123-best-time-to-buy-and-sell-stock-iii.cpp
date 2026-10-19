class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1=INT_MAX;
        int buy2=INT_MAX;
        int sell1=0;
        int sell2=0;
        for(auto p:prices){
            buy1 = min(buy1, p);
            sell1 = max(sell1, p - buy1);
            buy2 = min(buy2, p - sell1);
            sell2 = max(sell2, p - buy2);
        }
        return sell2;
    }
};