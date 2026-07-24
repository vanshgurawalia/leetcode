class Solution {
public:
    void sortColors(vector<int>& nums) {
        int value=0;
        int pos=0;

        while(value<2){
            for(int i=pos ; i<nums.size() ; i++){
                if(nums[i]==value){
                    swap(nums[i],nums[pos]);
                    pos++;
                }
            }
            value++;
        }
    }
};