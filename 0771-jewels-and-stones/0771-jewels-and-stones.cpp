class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;

        for(int i=0 ;i <stones.length() ; i++){
            mp[stones[i]]++;
        }

        int sum = 0;

        for(int i=0 ; i<jewels.length() ; i++){
            if(mp.count(jewels[i])) sum+=mp[jewels[i]];
        }
        return sum;
    }
};