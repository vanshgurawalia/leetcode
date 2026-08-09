class Solution {
public:
    int arr[31];
    int fib(int n) {
        if (n==0 || n==1){
            return n;
        }
        if(arr[n]==0){
            arr[n] = fib(n-1) + fib(n-2);
        }
        return arr[n];
    }
};