#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
    string n;cin>>n;
    string arr[4];
    for(int i=0;i<4;i++){
        arr[i]=n[i];
    }
    sort(arr,arr+4);
    int c=0,mc=0;
    for(int i=0;i<4;i++){
        if(arr[i]==arr[i+1]){
            c++;
            mc=max(c,mc);
        }else{
            c=0;
        }
    }
    if(mc+1==4){
        cout<<-1<<endl;
    }else if( mc+1==3){
        cout<<6<<endl;
    }else if(mc+1==2){
        cout<<4<<endl;
    }else{
        cout<<4<<endl;
    }
}

 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) funct();
    return 0;
}