class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.length();
        unordered_set<char> cset;
        int left=0;
        int right=0;
        int maxlength=0;

        for(right ; right<n ; right++){
            if(cset.count(s[right])==0){
                cset.insert(s[right]);
                maxlength= max(maxlength, right-left+1);
            }
            else{
                while(cset.count(s[right])){
                    cset.erase(s[left]);
                    left++;
                }
                cset.insert(s[right]);
            }
        }
        return maxlength;
    }
};