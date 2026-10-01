#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = s.size() - 1;
        int j = s.size() - 1;
        string ans;
        while (j >= 0) {
            if (s[j] == ' ') {
                i--, j--;
            } 
            else {
                
                while (j >= 0 && s[j] != ' ') {
                    j--;
                }
                for (int start = j + 1; start <= i; start++) {
                    ans.push_back(s[start]);
                }
                ans.push_back(' ');
            }
            while (j >= 0 && s[j] == ' ') {
                j--;
            }
            i = j;
        }
        ans.pop_back();
        return ans;
    }
};