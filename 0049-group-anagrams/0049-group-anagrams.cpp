class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        // for (string word : strs) {
        //     string key = word;6
        //     sort(key.begin(), key.end());

        //     groups[key].push_back(word);
        // }
        // vector<vector<string>> ans;
        // for(auto &p:groups){
        //     ans.push_back(p.second);
        // }
        // return ans;



        for (string word : strs) {
            vector<int> freq(26,0);
            for(auto c:word){
                freq[c-'a']++;
            } 

            string key ="";
            for(auto val:freq){
                key+=to_string(val)+"#";
            }
            groups[key].push_back(word);
        }
        vector<vector<string>> ans;
        for(auto &p:groups){
            ans.push_back(p.second);
        }
        return ans;
    }
};