class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<char> st;
        // int left = 0;
        // int ans = 0;
        // for (int right = 0; right < s.length(); right++) {
            
        //     while(st.count(s[right])){
        //         st.erase(s[left]);
        //         left++;
        //     }            
        //     st.insert(s[right]);
        //     ans = max(ans, right - left + 1);
        // }

        // return ans;

        
        int st=0;
        int mxlen=INT_MIN;
        unordered_map<char,int> mp;
        for(int end=0;end<s.length();end++){
            mp[s[end]]++;
            while(mp.size()!=(end-st+1)){
                mp[s[st]]--;

                if (mp[s[st]] == 0) {
                    mp.erase(s[st]);
                }
            st++;
            }
            mxlen=max(mxlen,end-st+1);
        }
        return mxlen==INT_MIN?0:mxlen;
        
        
    }
};