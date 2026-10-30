class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector <vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1,r=n-1;
            int target=-nums[i];
            while(l<r){
                int sum=nums[l]+nums[r];
                if(sum==target){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    int j=l+1;
                    while(j<n && nums[j]==nums[l]) j++;
                    l=j;
                    j=r-1;
                    while(r>l && nums[j]==nums[r]) j--;
                    r=j;
                }else if(target<sum){
                    r--;

                }else{
                    l++;
                }
            }

        }
        return ans;
    }
};