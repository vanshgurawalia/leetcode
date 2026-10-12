// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0;
        int right = n;
        int res = -1;

        while(left<=right){
            int mid = left + (right-left)/2;
            bool bad = isBadVersion(mid);

            if(bad == true){
                res = mid;
                right = mid-1;
            }
            else if(bad == false){
                left = mid+1;
            }
        }
        return res;
    }
};