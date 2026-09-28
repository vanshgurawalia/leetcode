class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        long int count = 0;

        for(int start=0 ; count<n ; start++){
            int preval = nums[start];
            int nextpos = start;
            do{
                nextpos = (nextpos+k)%n;
                int temp = nums[nextpos];
                nums[nextpos] = preval;
                preval = temp;
                count++;
            }while(nextpos!=start);
        }
    }
};