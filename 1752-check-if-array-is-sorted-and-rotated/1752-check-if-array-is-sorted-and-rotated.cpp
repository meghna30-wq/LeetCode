class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        nums.insert(nums.end(), nums.begin(), nums.end());
        int curr=1;
        for(int i=0;i<2*n-1;i++){
            if(nums[i]<=nums[i+1]){
                curr++;
            }
            else{
                curr=1;
            }
            if(curr>=n){
                return true;
            }
        }
        return false;
    }
};