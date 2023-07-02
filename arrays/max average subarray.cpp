class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int mx=sum;
        int j=0;
        if(k==nums.size()){
            return (double)sum/k;
        }
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[j];
            j++;
            mx=max(sum,mx);
        }
        return (double)mx/k;
    }
};