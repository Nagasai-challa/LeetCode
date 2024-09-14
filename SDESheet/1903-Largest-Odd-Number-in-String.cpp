class Solution {
public:
    string largestOddNumber(string num) {
        int i=0;
        i=num.length();
        while(i>=0){
            char ch=num[i];
            if(ch=='1' || ch=='3' || ch=='5' || ch=='7' || ch=='9'){
                return num.substr(0,i+1);
            }
            i--;
        }
        return "";
    }
};