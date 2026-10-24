class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n = values.size();
        vector<pair<int, int>> items;

        for (int i = 0; i < n; i++) {
            items.push_back({values[i], labels[i]});
        }

        sort(items.rbegin(), items.rend());

        unordered_map<int, int> freq;
        int sum = 0, selected = 0;

        for (auto item : items) {
            int value = item.first;
            int label = item.second;

            if (selected == numWanted)
                break;

            if (freq[label] == useLimit)
                continue;

            sum += value;
            freq[label]++;
            selected++;
        }

        return sum;
    }
};