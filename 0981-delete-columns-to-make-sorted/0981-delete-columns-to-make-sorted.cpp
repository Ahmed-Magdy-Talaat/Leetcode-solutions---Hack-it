class Solution {
public:
set<int>st;
    int minDeletionSize(vector<string>& strs) {
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]<strs[i-1][j]){
                    st.insert(j);
                }
            }
        }
        return st.size();
    }
};