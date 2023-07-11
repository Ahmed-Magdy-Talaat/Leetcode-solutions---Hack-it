class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<manager.size();i++){
            mp[manager[i]].push_back(i);
        }
        queue<pair<int,int>>q;
        q.push({headID,0});
        int mx=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
            int cur=q.front().first;
            int time=q.front().second;
            q.pop();
            int dur=informTime[cur]+time;
            for(auto i:mp[cur]){
                q.push({i,dur});
            }
            mx=max(mx,dur);
        }
        }
        return mx;
    }
};