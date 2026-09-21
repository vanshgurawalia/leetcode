class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0 ; 
        int digcount = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            int n = nums[i];
            while(n!=0){
                n = n/10;
                count++;
            }
            if(count%2==0){
                digcount++;
            }
            count = 0;
        }
        return digcount;
    }
};