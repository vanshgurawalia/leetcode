class Solution {
public:
    int mySqrt(int x) {
        long long int sqrnum = 1;
        long long int num = 1;
        if(x==0 || x==1) return x;

        while((sqrnum*sqrnum) <= x){
            num = sqrnum;
            sqrnum++;
        }
        return num;
    }
};