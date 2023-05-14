class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int k) {
        set<vector<int>>sp;
       sort(arr.begin(),arr.end());
       int n=arr.size();
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n-1;j++){
               int l=j+1,h=n-1;
               while(l<h){
                   long long sum=(long long)arr[i]+(long long)arr[j]+(long long)arr[l]+(long long)arr[h];
                   if(sum==k){
                       sp.insert({arr[i],arr[j],arr[l],arr[h]});
                       l++;h--;
                   }else if(sum<k){
                       l++;
                   }else{
                       h--;
                   }
               }
           }
       }
       vector<vector<int>>ans;
       for(auto it:sp){
           ans.push_back(it);
       }
       return ans;
    }
};