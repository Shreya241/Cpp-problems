class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0) return 0;
        int lm=1;
        int c=0;
        int l=INT_MIN;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]-1==l){
                c++;
                l=arr[i];
            }else if(arr[i]!=l){
                c=1;
                l=arr[i];
            }
            lm=max(lm,c);
        }
        return lm;
    }
};