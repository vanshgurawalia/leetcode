class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int total_sum = 0;
        for(int i=0 ; i<nums.size() ; i++){
            sum+=nums[i];
        }
        for(int i=0 ; i<=nums.size() ; i++){
            total_sum+=i;
        }

        return abs(total_sum - sum);
    }
};