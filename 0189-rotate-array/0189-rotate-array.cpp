class Solution {
public:
    void revnum(vector<int>& nums, int start, int end){
        while(start<=end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k%n == 0) return;
        
        k = k%n;
        revnum(nums, 0, n-1);
        revnum(nums, 0, k-1);
        revnum(nums, k, n-1);
    }
};