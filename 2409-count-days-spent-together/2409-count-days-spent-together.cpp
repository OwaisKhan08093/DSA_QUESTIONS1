class Solution {
public:
    int convert(string s) {
        int m = stoi(s.substr(0, 2));
        int d = stoi(s.substr(3, 2));

        int days[] = {0,31,59,90,120,151,181,212,243,273,304,334};
        return days[m - 1] + d;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

    int st=max(convert(arriveAlice),convert(arriveBob));
    int end=min(convert(leaveAlice),convert(leaveBob));
    return max(0,end-st+1);
        
    }
};