class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> result;
        unordered_map<string, int> mp;

        for (int i = 0; i < list1.size(); i++) {
            mp[list1[i]] = i;
        }

        int minsum = INT_MAX;

        for (int i = 0; i < list2.size(); i++) {
            if (mp.count(list2[i])) {
                int sum = i + mp[list2[i]];
                if (sum < minsum) {
                    minsum = sum;
                    result.clear();               
                    result.push_back(list2[i]);
                } else if (sum == minsum) {
                    result.push_back(list2[i]);   
                }
            }
        }
        return result;
    }
};