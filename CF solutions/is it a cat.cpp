#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
   int t;cin>>t;
   while(t--){
    int n;
    cin>>n;
    bool flag=true;
    string str;cin>>str;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        if((str[i]=='m'|| str[i]=='M')&&(i==0||str[i-1]=='m'||str[i-1]=='M')){
            a++;
        }else if((str[i]=='e'|| str[i]=='E')&&(str[i-1]=='m'||str[i-1]=='M'||str[i-1]=='e'||str[i-1]=='E')){
            b++;
        }else if((str[i]=='o'|| str[i]=='O')&&(str[i-1]=='e'||str[i-1]=='E'||str[i-1]=='o'||str[i-1]=='O')){
            c++;
        }else if((str[i]=='w'|| str[i]=='W')&&(str[i-1]=='o'||str[i-1]=='O'||str[i-1]=='w'||str[i-1]=='W')){
            d++;
        }else{
            flag=false;
        }
    }
    if(a>=1 && b>=1 && c>=1 && d>=1 && flag==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
}