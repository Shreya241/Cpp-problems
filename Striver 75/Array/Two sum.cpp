//n2
//https://leetcode.com/problems/two-sum/description/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int c=target-nums[i];
            if(m.find(c)!=m.end()){
                return {i,m[c]};
            }
            m[nums[i]]=i;
        }
        return{};
    }
};

//nlog n

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        int i=0,j=n-1;
        while(i<j){
            int sum=v[i].first+v[j].first;
            if(sum==target){
                return {v[i].second,v[j].second};
            }else if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        return {};
    }
};