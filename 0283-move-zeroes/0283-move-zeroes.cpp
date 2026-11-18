class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int count = 0;

        while(i<nums.size()){
            if(nums[i]!=0){
                swap(nums[i], nums[i-count]);
                i++;
            }
            else{
                i++;
                count++;
            }
        }
    }
};