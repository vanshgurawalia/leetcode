class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int k = 10000;
        vector<int>countarr(2*k+1);

        for(int i=0 ; i<nums.size() ; i++){
            countarr[nums[i]+k]++;
        }

        bool isevenidx = true;
        int maxsum = 0;

        for(int i=0 ; i<2*k+1 ; i++){
            while(countarr[i]>0){
                maxsum = maxsum + (isevenidx ? i-k : 0);
                countarr[i]--;
                isevenidx = !isevenidx;
        }
    }
    return maxsum;
    }
};