class Solution {
public:
    string longestCommonPrefix2(const string& s1, const string& s2) {
        int minLength = min(s1.length(), s2.length());
        int i = 0;
        while (i < minLength && s1[i] == s2[i]) {
            ++i;
        }
        return s1.substr(0, i);
    }
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(int i=1;i<strs.size();i++){
            res=longestCommonPrefix2(res,strs[i]);
        }
        return res;
    }
};