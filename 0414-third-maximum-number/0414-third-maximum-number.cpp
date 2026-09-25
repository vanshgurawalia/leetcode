class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1 = LONG_MIN;
        long max2 = LONG_MIN;
        long max3 = LONG_MIN;

        for(int i=0 ; i<nums.size() ; i++){
            if(max1 != LONG_MIN && max1 == nums[i]) continue;
            if(max2 != LONG_MIN && max2 == nums[i]) continue;
            if(max3 != LONG_MIN && max3 == nums[i]) continue;

            if(max1 == LONG_MIN || nums[i]>max1){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(max2 == LONG_MIN || nums[i]>max2){
                max3 = max2;
                max2 = nums[i];
            }
            else if(max3 == LONG_MIN || nums[i]>max3){
                max3 = nums[i];
            }
        }
        if(max3 == LONG_MIN) return max1;
        else return max3;
    }
};