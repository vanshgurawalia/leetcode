class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>result;

        if(k==arr.size()){
            for(int num : arr){
                result.push_back(num);
            }
            return result;
        }

        int left = 0;
        int right = arr.size()-1;
        while(left<right){
            int mid = left + (right-left)/2;
            if(arr[mid] >= x) right = mid;
            else left = mid+1;
        }

        left = right-1;
        int i=0;
        while(i<k){
            if(left == -1) right++;
            else if(right == arr.size()) left--;
            else if(abs(arr[right]-x) >= abs(arr[left]-x)) left--;
            else right++; 
            i++;
        }

        for(int j=left+1 ; j<right ; j++){
            result.push_back(arr[j]);
        }

        return result;
    }
};