class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int pos=n-1;
        vector<int> res(n);

        while(left<=right){
            int lsqr = nums[left]*nums[left];
            int rsqr = nums[right]*nums[right];

            if(lsqr>rsqr){
                res[pos]=lsqr;
                left++;
            }
            else{
                res[pos]=rsqr;
                right--;
            }
            pos--;
        }
        return res;
    }
};