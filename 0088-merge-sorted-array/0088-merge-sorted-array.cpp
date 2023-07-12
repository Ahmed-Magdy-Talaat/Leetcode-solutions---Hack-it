class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        map<int,int>mp;
        for(int i=0;i<m;i++)
        mp[nums1[i]]++;
        for(int i=0;i<n;i++)
        mp[nums2[i]]++;
    int j=0;
        for(auto i:mp){
            while(i.second--){
            nums1[j]=i.first;
            j++;
            }
        }
    
    }
};