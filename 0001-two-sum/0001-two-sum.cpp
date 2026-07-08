class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            if(map.count(target-nums[i])){
                return{i,map[target-nums[i]]};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};