class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int further=0,cnt=0;
        int l=0,r=0;
        while(r<nums.size()-1){
            for(int i=l;i<=r;i++)
                further=max(further,i+nums[i]);
            l=r+1;
            r=further;
            cnt++;
        }

        return cnt;
    }
};