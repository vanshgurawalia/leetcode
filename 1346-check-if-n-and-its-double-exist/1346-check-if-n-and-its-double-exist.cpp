class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>set;

        for(int num : arr){
            if(set.count(2*num) || (set.count(num/2) && num%2==0)){
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};