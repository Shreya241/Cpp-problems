#include<bits/stdc++.h>
using namespace std;

// bool prime(int n){
//   if(n==3 || n==2 || n==5){
//     return true;
//   }
//   if(n%3==0 || n%2==0){
//     return false;
//   }
//   if(n==1){
//     return false;
//   }
//   for(int i=5;i*i<=n;i=i+6){
//     if(n%i==0 && n%(i+2)==0){
//       return false;
//     }
//   }
//   return true;
// }

// void primeFact(int n){
//   for(int i=2;i<n;i++){
//     if(prime(i)){
//       int x=i;
//       while(n%x==0){
//         cout<<i<<endl;
//         x=x*i;
//       }
//     }
//   }
// }
void primeFact(int n){
  if(n<=1) return;

  for(int i=2;i*i<=n;i++){
      while(n%i==0){
        cout<<i<<endl;
        n=n/i;
      }
    }

  if(n>1){
    cout<<n;
  }
}


int main(){
  int n;cin>>n;
  primeFact(n);
  return 0;
}