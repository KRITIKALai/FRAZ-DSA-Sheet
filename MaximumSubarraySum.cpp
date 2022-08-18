class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cumSum=0, maxSum=INT_MIN, flag=0;
        if(nums.size()==0) return 0;
        else if(nums.size()==1) return nums[0];
        else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]>0) flag=1;
                if(cumSum+nums[i]<=0) cumSum=0;
                else cumSum = cumSum+nums[i];
                maxSum = max(maxSum, cumSum);
            }
        return flag==1?maxSum:*max_element(nums.begin(),nums.end());   
        }
    }
};
