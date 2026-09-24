class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxx = -1;
        int n = arr.size()-1;
        for(int i = n ; i>=0 ; i--){
            int temp = arr[i];
            arr[i] = maxx;
            maxx = max(temp,maxx);
        }
        return arr;
    }
};