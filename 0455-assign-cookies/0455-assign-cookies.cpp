class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(count<g.size()&&g[count]<=s[i]){
                cnt++;
                count++;
            }
        }
        return count;
    }
};