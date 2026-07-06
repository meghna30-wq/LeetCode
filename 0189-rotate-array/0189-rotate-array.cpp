class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
        k=k%n;
        int start=n-k;
        nums.insert(nums.end(),nums.begin(),nums.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=nums[start];
            start++;
        }
        nums=ans;
    }
};