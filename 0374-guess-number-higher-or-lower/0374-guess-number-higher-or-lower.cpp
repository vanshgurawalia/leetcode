/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if(n==1) return 1;

        int left = 0;
        int right = n;

        while(left<=right){
            int num = left + (right-left)/2;
            int mid = guess(num);
            if(mid == -1){
                right = num-1;
            }
            else if(mid == 1){
                left = num+1;
            }
            else{
                return num;
            }
        }
        return -1;
    }
};