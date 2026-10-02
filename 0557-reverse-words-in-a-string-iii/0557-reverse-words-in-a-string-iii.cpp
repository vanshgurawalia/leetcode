class Solution {
public:
    string reverseWords(string s) {
        string ans;

        int i = 0;
        int j = 0;

        while(j<s.length()){
            if(s[j]==' '){
                j++;
                i++;
            }
            else{
                while(j<s.length() && s[j]!=' '){
                    j++;
                }

                for(int end=j-1 ; end>=i ; end--){
                    ans.push_back(s[end]);
                }
                ans.push_back(' ');
                j++;
                i = j;
            }
        }
        ans.pop_back();
        return ans;
    }
};