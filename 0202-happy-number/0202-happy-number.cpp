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
        unordered_set<int>seen;

        while(n!=1){
            if(seen.count(n)) return false;
            seen.insert(n);

            n = sqrofnum(n);
        }
        return true;
    }
};