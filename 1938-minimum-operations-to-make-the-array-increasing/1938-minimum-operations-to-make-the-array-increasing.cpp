class Solution {
public:
    int minOperations(vector<int>& nums) {
        long long int sum=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                sum+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return sum;
    }
};