#include<iostream>
#include<map>
using namespace std;
 
int main(){
   int n;cin>>n;
   map<int,int>m;
   for(int i=0;i<n;i++){
    int j;
    cin>>j;
    m[j]++;
   }
   int c=0;
   c=+m[4];

   if(m[3]>m[1]){
    c=c+m[3];
    m[1]=0;
   }else if(m[1]>m[3]){
    c=c+m[3];
    m[1]=m[3]-m[1];
   }else if(m[1]==m[3]){
    c=c+m[3];
    m[3]=0;
    m[1]=0;
   }
   c+=((2*m[2]+m[1])+3)/n;
//    c=c+m[2]/2;
//    m[2]=(m[2]*2)%4;
//    if((m[2]+m[1])%4==0){
//     c=c+(m[2]+m[1])/4;
//    }else{
//     c=c+(m[2]+m[1])/4+1;
//    }
   cout<<abs(c);
}