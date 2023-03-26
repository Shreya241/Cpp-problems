#include<bits/stdc++.h>
#define int long long 
using namespace std;
 
 
void funct(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2 && y1==y2){
        cout<<0<<endl;
    }else if(x1==x2 && y2>y1){
        cout<<(y2-y1)*2<<endl;
    }else if((x2-x1)>(y2-y1)&&(x2>x1) ||(y2<y1)){
        cout<<-1<<endl;
    }else{
        x1=x1+(y2-y1);
        int ans=(y2-y1)+(x1-x2);
        if(ans>0){
             cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
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