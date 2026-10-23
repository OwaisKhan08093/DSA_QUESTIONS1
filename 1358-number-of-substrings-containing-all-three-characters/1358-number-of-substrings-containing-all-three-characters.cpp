class Solution {
public:
    int numberOfSubstrings(string s) {

        int count=0;
        int n=s.length();
        int st=0;
        int freq[3]={0};
        for(int end=0;end<n;end++){

            freq[s[end]-'a']++;
            while(freq[0]&&freq[1]&&freq[2]){
                count+=n-end;
                freq[s[st]-'a']--;
                st++;
            }
        }
        return count;
        
    }
};