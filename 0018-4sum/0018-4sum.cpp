class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        sort(nums.begin(), nums.end());

        for(int i=0 ; i<nums.size() ; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1 ; j<nums.size() ;){
                int s = j+1;
                int e = nums.size()-1;
                while(s<e){
                    long long  sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[s]+(long long)nums[e];
                    if(sum == target){
                        result.push_back({nums[i],nums[j],nums[s],nums[e]});
                        s++;
                        e--;
                        while(s<e && nums[s]==nums[s-1]) s++;
                    }
                    else if(sum > target) e--;
                    else s++;
                }
                j++;
                while(j<nums.size() && nums[j]==nums[j-1]) j++;
            }
        }
        return result;
    }
};