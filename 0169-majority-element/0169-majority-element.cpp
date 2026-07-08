class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int candidate=nums[0];
        int count=0;
        for(int x:nums){
            if(x==candidate){
                count++;
            }else{
                count--;
                if(count==0){
                    candidate=x;
                    count=1;
                }
            }
        }
        return candidate;
    }
};