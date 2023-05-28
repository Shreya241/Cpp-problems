#include <iostream>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
   string num="1234000";
   int n=num.size();
        int i=n-1;
        while(i>=0 && num[i]=='0'){
                i--;
        }
        string ans="";
        for(int j=0;j<i+1;j++){
            ans+=num[j];
        }
        cout<<ans;
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