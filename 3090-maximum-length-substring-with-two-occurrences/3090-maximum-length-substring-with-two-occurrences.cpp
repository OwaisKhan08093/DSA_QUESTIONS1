class Solution {
public:
    int maximumLengthSubstring(string s) {
        int mxlen=INT_MIN;
        int st=0;
        unordered_map<char,int> mp;
        int n=s.length();
        for(int end=0;end<n;end++){
            mp[s[end]]++;
            while(mp[s[end]]>2){
                mp[s[st]]--;
                if(mp[s[st]]==0){
                    mp.erase(s[st]);
                }
                st++;
            }
            mxlen=max(mxlen,end-st+1);
        }
        return mxlen;
        
    }
};