class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int maxprod=0;
        while(left<right){
            int prod=(nums[left]-1)*(nums[right]-1);
            if(nums[left]<nums[right]){
                left++;
            }
            else{
                right--;
            }
            maxprod=max(maxprod,prod);
        }
        return maxprod;
    }
};