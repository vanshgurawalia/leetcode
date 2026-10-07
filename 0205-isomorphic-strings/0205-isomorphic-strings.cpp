class Solution {
public:
    string getinstr(string s){
        unordered_map<char,int>mp;
        string a;

        for(int i=0 ; i<s.length() ; i++){
            if(!mp.count(s[i])) mp.insert({s[i],i});
            a+=to_string(mp[s[i]]) + " ";
        }
        return a;
    }
public:
    bool isIsomorphic(string s, string t) {
        return getinstr(s) == getinstr(t);
    }
};