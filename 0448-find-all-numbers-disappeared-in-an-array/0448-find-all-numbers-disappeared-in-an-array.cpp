class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>set;
        
        for(int num : nums){
            set.insert(num);
        }

        for(int i=1 ; i<=nums.size() ; i++){
            if(set.count(i)) continue;
            else ans.push_back(i);
        }
        return ans;
    }
};