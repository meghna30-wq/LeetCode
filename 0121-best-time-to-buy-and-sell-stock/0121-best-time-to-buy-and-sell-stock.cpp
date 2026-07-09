class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int min=INT_MAX;
        int profit=0;
        int maxP=0;
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            profit=arr[i]-min;
            maxP=max(maxP,profit);
        }
        return maxP;
    }
};