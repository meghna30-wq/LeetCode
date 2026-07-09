class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxS=INT_MIN;
        int curr=0;
        for(int i=0;i<n;i++){
            curr=max(curr+nums[i],nums[i]);
            maxS=max(curr,maxS);
        }
        return maxS;
    }
};