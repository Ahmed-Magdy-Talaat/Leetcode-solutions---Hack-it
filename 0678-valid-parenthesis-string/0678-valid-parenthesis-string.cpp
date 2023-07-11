class Solution {
public:
    bool checkValidString(string s) {
        stack<char>st;
        int l=0,r=0;
        for(int i=0;i<s.size();i++){
            l+=s[i]=='('?1:-1;
            r+=s[i]!=')'?1:-1;
            if(r<0)break;
            l=max(l,0);
        }
     
        return l==0;
    }
};