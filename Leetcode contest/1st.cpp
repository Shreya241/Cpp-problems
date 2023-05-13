#include <iostream>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
   string str;cin>>str;
    int c=0;
     if((str[11]=='6' && str[12]!='0')||str[11]=='7'||str[11]=='8'||str[11]=='9'){
                c++;
            }
    cout<< c;
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