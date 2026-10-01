class Solution {
public:
    string reverseWords(string s) {
        int i = s.length()-1;
        int j = s.length()-1;
        string ans;

        while(j>=0){
            if(s[j] == ' '){
                j--;
                i--;
            }

            else{
                while(j>=0 && s[j]!=' '){
                    j--;
                }

                for(int start=j+1 ; start<=i ; start++){
                    ans.push_back(s[start]);
                }
                ans.push_back(' ');
            }
            i = j;
        }
        ans.pop_back();
        return ans;
    }
};