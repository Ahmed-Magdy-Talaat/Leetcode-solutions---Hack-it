class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int mx=0;
        map<int,int>mp;
        for(int i=0;i<rectangles.size();i++){
            int mn=min(rectangles[i][0],rectangles[i][1]);
            mp[mn]++;
            mx=max(mx,mn);
        }
    return mp[mx];
    }
};