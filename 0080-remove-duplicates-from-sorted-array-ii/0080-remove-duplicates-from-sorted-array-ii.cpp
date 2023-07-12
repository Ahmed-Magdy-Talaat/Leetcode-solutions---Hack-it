class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int k=0,cnt=1,j=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        if(cnt>2){
            nums[i-1]=INT_MAX;
            k++;
            cnt-=1;
        }
    }
    sort(nums.begin(),nums.end());
    return nums.size()-k;
    }
};