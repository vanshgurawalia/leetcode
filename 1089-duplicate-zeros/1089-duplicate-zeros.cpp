class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>copy(arr.size());

        int i = 0;
        int j = 0;
        while(i<arr.size()){
            if(arr[i] == 0){
                if(j < arr.size()) copy[j] = 0;
                j++;
                if(j < arr.size()) copy[j] = 0;
            }
            else{
                if(j < arr.size()) copy[j] = arr[i];
            }
            i++;
            j++;
        }

        for(int i=0 ; i<arr.size() ; i++){
            arr[i] = copy[i];
        }
    }
};