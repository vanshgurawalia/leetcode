class Solution {
public:
    string reverseWords(string s) {
        string res;

        int i = s.length()-1;
        int j = s.length()-1;

        while(j>=0){
            if(s[j] == ' '){
                i--;
                j--;
            }

            else{
                while(j>=0 && s[j]!=' '){
                    j--;
                }
                for(int start = j+1 ; start<=i ; start++){
                    res.push_back(s[start]);
                }
                res.push_back(' ');
                i = j;
            }
        }
        res.pop_back();
        return res;
    }
};