class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>a;
        for(int num : nums){
            a[num]++;
        }

        priority_queue<pair<int,int>> maxheap;
        for(auto& [num,count] : a){
            maxheap.push({count,num});
        }

        vector<int>result;
        for(int i=0 ; i<k && !maxheap.empty() ; i++){
            result.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return result;
    }
};