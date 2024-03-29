class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;int h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if((m==0 || nums[m-1]<=nums[m])&&(m==n-1 || nums[m+1]<=nums[m])){
                return m;
            }else if(m>0 && nums[m-1]>=nums[m]){
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return -1;
    }
};