#include <bits/stdc++.h>  
#include <string>
#define int long long
using namespace std;
 
 
void funct(){
    int n=7;
    int a[] = {8,-8,9,-9,10,-11,12};
   int mmax=a[0]; int mmin=a[0];
        int currMax = 0; int currMin=0;
        int totalSum=0;
        
        for(int i=0;i<n;i++){
            currMax= max(currMax+a[i], a[i]);
            mmax = max(currMax, mmax);
            currMin = min(currMin+a[i], a[i]);
            mmin = min(currMin, mmin);
            totalSum+=a[i];
            cout<<mmax<<endl;
        }
    if(mmax>0){
        //cout<< max(mmax, totalSum-mmin);    
}else{
    //cout<<mmax;
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