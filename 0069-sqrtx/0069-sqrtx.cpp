class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x;
        long long int result = 1;
        if(x==0 || x==1) return x;

        while(left<=right){
            long long int mid = left + (right-left)/2;
            long long int sqr = mid*mid;
            if(sqr < x){
                result = mid;
                left = mid+1;
            }
            else if(sqr > x){
                right = mid-1;
            }
            else return mid;
        }
        return result;
    }
};