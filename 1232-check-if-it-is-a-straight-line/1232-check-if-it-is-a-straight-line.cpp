class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() <=2) return true;

        int deltaY21 = coordinates[1][1] - coordinates[0][1];
        int deltaX21 = coordinates[1][0] - coordinates[0][0];

        for(int i=2 ; i<coordinates.size(); i++){
            int deltaYi1 = coordinates[i][1] - coordinates[0][1];
            int deltaXi1 = coordinates[i][0] - coordinates[0][0];

            if(deltaY21 * deltaXi1 != deltaX21 * deltaYi1) return false;
        }
        return true;
    }
};