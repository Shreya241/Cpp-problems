class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>v;
        if(nums.size()==0) return v;
        int i=1;
        int j=nums[0];
        while(i<nums.size()){
            if(nums[i]==nums[i-1]+1){
                i++;
            }else{
                if(nums[i-1]!=j)v.push_back(to_string(j)+"->"+to_string(nums[i-1]));
                else{
                    v.push_back(to_string(j));
                    }
                j=nums[i];
                i++;
            }
        }
        if(nums[i-1]!=j){
            v.push_back(to_string(j)+"->"+to_string(nums[i-1]));
        }else{
            v.push_back(to_string(j));
        }
        return v;
    }
};