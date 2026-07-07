class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int j=0;
        int ans=0;
        while(j<n){
            if(nums[j]==1){
                cnt++;
            }
            else{
                cnt=0;
            }

            ans=max(cnt,ans);
            j++;
        }
        return ans;
    }
};