class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int st=0;
        string stnum=to_string(num);
        int n=stnum.length();
        string str="";
        int count=0;
        for(int end=0;end<n;end++){
            str+=stnum[end];
            if(end-st+1>k){
                str.erase(0,1);
                st++;
            }
            if (end - st + 1 == k) {
                int x = stoi(str);

                if (x != 0 && num % x == 0) {
                    count++;
                }
            }
        }
        return count;
    }
};