class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')==1)c++;
        }
        string g="";
        while(c>1){
            g+='1';
            c--;
        }
        for(int i=g.size();i<s.size()-1;i++){
            g+='0';
        }
        g+='1';
         return g;
    }
   
};