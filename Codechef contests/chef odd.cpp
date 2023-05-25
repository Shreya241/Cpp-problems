#include <iostream>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
   int N,K;cin>>N>>K;
	    if (N < 2 * K) {
            cout << "NO" << endl;
        }else{
            int odd=(N/2) + (N%2);
            int ans=odd-K;
            if(ans%2==0 && ans>=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
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