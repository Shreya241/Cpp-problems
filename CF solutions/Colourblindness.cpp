#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;cin>>n;
while(n--){
int m;cin>>m;
string s,p;
cin>>s>>p;
int k=0;
for(int i=0;i<m;i++){
    if(s[i]==p[i]){
        k++;
    }else if((s[i]=='G' && p[i]=='B') || (s[i]=='B' && p[i]=='G')){
        k++;
    }
}
if(k==m){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
}
}