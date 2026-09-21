class Solution {
public: 
    bool evendigit(int num){
        int count = 0;
        while(num!=0){
            num = num/10;
            count++;
        }
        return count%2 == 0;
    }
public:
    int findNumbers(vector<int>& nums) {
        int evencount = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(evendigit(nums[i])) evencount++;
        }
        return evencount;
    }
};