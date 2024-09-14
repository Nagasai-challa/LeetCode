class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string word="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                word=word+s[i];
            }
            else{
                if(word!=""){
                    res=word+' '+res;
                    word="";
                }
            }
        }
        res=word+' '+res;
        while (!res.empty() && res[0] == ' ') {
            res.erase(res.begin());
        }
        while (!res.empty() && res[res.length()-1] == ' ') {
            res.erase(res.end()-1);
        }
        return res;
    }
};