#include<iostream>
#include<map>
using namespace std;
 
int main(){
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    int k;cin>>k;
    string s;cin>>s;
    int ans=0;
    string u="",l="";
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            u+=s[i];
        }else{
            l+=s[i];
        }
    }
    int j=0,i=0;
    while(i<u.length() && j<l.length()){
        if(u[i]==toupper(l[j])){
            ans++;
            j++;
            i++;
        }else{
            if(l[j]==l[j+1]){
                ans++;
                k--;
                j=j+2;
            }
            if(u[i]==u[i+1]){
                ans++;
                k--;
                i=i+2;
            }
        }
    }

    if(i<u.length()){
        while(i<u.length()){
        if(u[i]==u[i+1]){
                ans++;
                k--;
                i=i+2;
            }
        else{
            i++;
        }
    }
    }
    if(j<l.length()){
    while(j<l.length()){
        if(l[j]==l[j+1]){
                ans++;
                k--;
                j=j+2;
        }else{
            j++;
        }
    }
    }
    if(k<0){
        cout<<ans+k<<endl;
    }else{
      cout<<ans<<endl;
   }
}
}