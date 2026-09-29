class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>>res;
        res.push_back({1});

        for(int row=1 ; row<rowIndex+1 ; row++){
            vector<int>newrow;
            newrow.push_back(1);

            vector<int>prevrow = res[row-1];
            for(int i=1 ; i<row ; i++){
                newrow.push_back(prevrow[i]+prevrow[i-1]);
            }

            newrow.push_back(1);
            res.push_back(newrow);
        }
        return res[rowIndex];
    }
};