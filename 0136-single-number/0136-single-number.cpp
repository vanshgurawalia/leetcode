class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>uni;

        for(int i=0; i<nums.size() ; i++){
            uni[nums[i]]++;
        }

        for(auto it:uni){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};