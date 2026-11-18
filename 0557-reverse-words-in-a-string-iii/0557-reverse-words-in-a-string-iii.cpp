class Solution {
public:
    string reverseWords(string s) {
        string res;
        int i = 0;
        int j = 0;

        while(j<s.length()){
            if(s[j] == ' '){
                i++;
                j++;
            }

            else{
                while(j<s.length() && s[j]!=' '){
                    j++;
                }

                for(int end=j-1 ; end>=i ; end--){
                    res.push_back(s[end]);
                }
                res.push_back(' ');
                i = j;
            }
        }
        res.pop_back();
        return res;
    }
};