class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n1, vector<int>& n2) {
        set<int>nums1;
        set<int>nums2;
        for(int i=0;i<n1.size();i++){
            nums1.insert(n1[i]);
        }
        for(int i=0;i<n2.size();i++){
            nums2.insert(n2[i]);
        }
        vector<int>v1,v2;
        for(int it:nums1){
            if(nums2.count(it)==0){
                v1.push_back(it);
            }
        }
        for(int it:nums2){
            if(nums1.count(it)==0){
                v2.push_back(it);
            }
        }
        return {v1,v2};
    }
};