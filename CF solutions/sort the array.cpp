#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main(){
   long long n;cin>>n;
   vector<long long>v,s;
   for(int i=0;i<n;i++){
    int k;
    cin>>k;
    v.push_back(k);
    s.push_back(k);
   }
   sort(s.begin(),s.end());
   if(v==s){
    cout<<"yes"<<endl;
    cout<<1<<" "<<1;
    return 0;
   }
   int i=0,j=n-1;
   int st,en;
   for(int i=0;i<n;i++){
    if(v[i]!=s[i]){
        st=i;
        break;
    }
   }
   for(int j=n-1;j>=0;j--){
    if(v[j]!=s[j]){
        en=j;
        break;
    }
   }
   int g=n-1-en;
   std::reverse( v.begin() + st, v.end() - g );

   if (v==s){
    cout<<"yes"<<endl;
    cout<<st+1<<" "<<en+1<<endl;
   }else{
    cout<<"no"<<endl;
   }
}