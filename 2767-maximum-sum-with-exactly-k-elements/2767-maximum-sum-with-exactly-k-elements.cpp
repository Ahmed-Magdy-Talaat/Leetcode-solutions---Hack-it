class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       int mx=nums[0];
       for (int i=0;i<nums.size();i++){
           mx=max(mx,nums[i]);
       }
       int sum=0;
       for(int i=0;i<k;i++)
       sum+=(mx+i);
       return sum; 
    }
};