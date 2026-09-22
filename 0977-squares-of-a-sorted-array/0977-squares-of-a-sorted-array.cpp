class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left = 0;
        int right = nums.size()-1;
        int i = ans.size()-1;

        while(left<=right){
            int lsqr = nums[left]*nums[left];
            int rsqr = nums[right]*nums[right];
            if(lsqr<rsqr){
                ans[i] = rsqr;
                right--;
                i--;
            }
            else{
                ans[i] = lsqr;
                left++;
                i--;
            }
        }
        return ans;
    } 
};