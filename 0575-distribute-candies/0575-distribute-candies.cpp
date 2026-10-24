class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int n=candyType.size();
        int allowed=n/2;
        unordered_map<int,int> mp;
        for(auto val:candyType){
            mp[val]++;
        }
        int distinct=mp.size();
        return min(allowed,distinct);
        
    }
};