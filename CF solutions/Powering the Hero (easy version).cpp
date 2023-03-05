#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    stack<int>s;
    int arr[n];
    int z=1;
    int ans=0;
    vector<int>t;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            s.push(arr[i]);
        }else if(!s.empty()){
            int j=i;
            while(j<n-1){
            if(arr[j]==0 && arr[j+1]==0){
                z++;
                j++;
            }
            }
                while(!s.empty()){
                t.push_back(s.top());
                s.pop();
                }
                sort(t.begin(),t.end());
                while(z--){
                    int l=t.size();
                    ans+=t[l-1];
                    l=l-1;
                }

            }else{
        return 0;
    }

}
    cout<<ans<<endl;
}
}