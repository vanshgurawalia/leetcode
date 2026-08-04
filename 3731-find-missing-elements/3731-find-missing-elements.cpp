class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>miss_num;

        for(int i=0 ; i<nums.size() ; i++){
            freq[nums[i]]++;
        }

        int s = *min_element(nums.begin() , nums.end());
        int l = *max_element(nums.begin() , nums.end());

        for(int x=s; x<l ; x++){
            if(freq.count(x) == 0){
                miss_num.push_back(x);
            }
        }
        return miss_num;
    }
};