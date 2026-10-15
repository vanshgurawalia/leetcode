class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>>result;

        int mindiff = INT_MAX;
        for(int i=1 ; i<arr.size() ; i++){
            int currmin = abs(arr[i]-arr[i-1]);
            mindiff = min(currmin,mindiff);
        }

        for(int i=1 ; i<arr.size() ; i++){
            if(abs(arr[i]-arr[i-1]) == mindiff){
                result.push_back({arr[i-1],arr[i]});
            }
        }
        return result;
    }
};