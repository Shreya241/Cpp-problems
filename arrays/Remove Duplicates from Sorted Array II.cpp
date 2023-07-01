class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int i=0;
        for(auto it:mp){
            int a=it.first;
            int b=it.second;
            if(b>=2){
                nums[i]=a;
                i++;
                nums[i]=a;
                i++;
            }
            if(b==1){
                nums[i]=a;
                i++;
            }
        }
        return i;
    }
};