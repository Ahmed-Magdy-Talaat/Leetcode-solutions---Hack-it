class Solution {
public:

    int minDeletionSize(vector<string>& strs) {
        map<int,int>mp;
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]<strs[i-1][j]){
                    mp[j]++;
                }
            }
        }
        return mp.size();
    }
};