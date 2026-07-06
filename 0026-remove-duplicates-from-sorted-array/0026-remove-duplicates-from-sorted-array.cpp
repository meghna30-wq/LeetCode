class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty()) return 0;
        int count =0;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[count]=nums[i];
                count++;
            }
        }
        nums[count]=nums[n-1];
        count++;
        return count;
    }
};