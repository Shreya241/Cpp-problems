#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int t;cin>>t;
   while(t--){
    int sum=0;
    int n;cin>>n;int k;cin>>k;
    map<char,int>m1;
    map<char,int>m2;
    string s;cin>>s;
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            m1[s[i]]++;
        }else{
            m2[s[i]]++;
        }
    }
    int cnt=0;
    for(char q='a';q<='z';q++){
        sum+=min(m1[toupper(q)],m2[q]);
        int diff=abs(m1[toupper(q)]-m2[q]);
        if(k){
            int can = min(diff/2,k);
            sum += can;
            k -= can;
        }
    }
    cout<<sum<<endl;
}
}