class Solution {
public:
    int sqrofnum(int n){
        int sum = 0;

        while(n != 0){
            int digits = n%10;
            n = n/10;
            sum = sum+(digits*digits);
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        while(true){
            slow = sqrofnum(slow);
            fast = sqrofnum(sqrofnum(fast));

            if(fast == 1) return true;
            if(slow == fast) return false;
        }
    }
};