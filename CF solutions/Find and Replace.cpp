#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;cin>>n;
       bool k=true;
       string s;cin>>s;
       if(n==1){
        cout<<"YES"<<endl;
        continue;
       }else{
        for(int i=0; i<n; i++){
            char c=s[i];
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if(s[j]==c && j%2!=0){
                        k=false;
                    }
                }
            }else{
                for(int j=0;j<n;j++){
                    if(s[j]==c && j%2==0){
                        k=false;
                    }
                }
            }
        }
        if(k==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }       
       }
    }
}
