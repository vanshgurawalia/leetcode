class Solution {
public:
    int binarysearch(int l , int r , vector<int>& nums , int target , bool isfirst){
        int first = -1;
        int last = -1;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target){
                if(isfirst){
                    first = mid;
                    r = mid-1;
                }
                else{
                    last = mid;
                    l = mid+1;
                }
            }
            else if(nums[mid] < target){
                l = mid+1;
            }
            else r = mid-1;
        }
        return (isfirst == true) ? first : last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
       if(nums.empty()) return {-1,-1};

       int first = binarysearch(0, nums.size()-1, nums, target, true);
       if(first == -1) return {-1,-1};

       int last =  binarysearch(first, nums.size()-1, nums, target, false);
       return {first,last};
    }
};