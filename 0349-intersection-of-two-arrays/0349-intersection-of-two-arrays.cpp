class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int>set1;
        unordered_set<int>set2;

        for(int num:nums1){
            set1.insert(num);
        }
        for(int num:nums2){
            set2.insert(num);
        }

        for(int num:set1){
            if(set2.count(num)){
                ans.push_back(num);
            }
        }
        return ans;
    }
};