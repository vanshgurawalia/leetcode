class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums);
        if(k==0){
            return;
        }
        else if(nums.size()==1){
            return;
        }
        for(int i=0 ; i<nums.size() ; ++i){
            nums[(i+k)%nums.size()]=temp[i];
        }
    }
};