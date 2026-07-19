class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest_number = *max_element(nums.begin() , nums.end());
        int largest_number = *min_element(nums.begin() , nums.end());

        return gcd(smallest_number,largest_number);
    }
};