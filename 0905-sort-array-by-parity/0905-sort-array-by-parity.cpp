class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size();
        int count = 0;

        while(left<right){
            if(nums[left]%2==0){
                swap(nums[left], nums[left-count]);
                left++;
            }
            else{
                left++;
                count++;
            }
        }
        return nums;
    }
};