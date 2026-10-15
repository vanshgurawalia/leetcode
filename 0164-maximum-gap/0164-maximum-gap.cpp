class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2) return 0;
        sort(nums.begin() , nums.end());
        int maxdiff = INT_MIN;

        for(int i=1 ; i<nums.size() ; i++){
            maxdiff = max(maxdiff, nums[i]-nums[i-1]);
        }

        return maxdiff;
    }
};