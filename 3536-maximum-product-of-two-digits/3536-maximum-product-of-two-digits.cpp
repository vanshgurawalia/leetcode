class Solution {
public:
    int maxProduct(int n) {
        
        vector<int>digits;
        while(n>0){
          digits.push_back(n%10);
          n/=10;
        }
        
        int left=0;
        int right=digits.size()-1;
        int maxprod=0;
        while(left<right){
          int prod=digits[left]*digits[right];
          if(digits[left]<digits[right]){
            left++;
          }
          else{
            right--;
          }
          maxprod=max(maxprod,prod);
        }
        return maxprod;
    }
};