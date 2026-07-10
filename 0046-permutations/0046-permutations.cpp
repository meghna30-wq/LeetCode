class Solution {
    vector<vector<int>> answer;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> vis(nums.size(),false);
        generate(nums,vector<int>(),vis);
        return answer;
        
    }
    void generate(vector<int>& nums, vector<int>curr,vector<bool> vis){

        if(curr.size()==nums.size()){
            answer.push_back(curr);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(vis[i])continue;
            vis[i]=true;
            curr.push_back(nums[i]);
            generate(nums,curr,vis);
            vis[i]=false;
            curr.pop_back();
        }
    }
};