#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
   long long n,t,i;
   cin>>n;
   cin>>t;
   long long arr[n];
   for(long long i=0; i<n; i++){
    cin>>arr[i];
   }
   long long j=-1,sum=0,ans=0;
        for(i=0;i<n;i++)
        {
            if(sum+arr[i]<=t)
                sum+=arr[i];
            else
            {
                sum+=arr[i];
                while(sum>t)
                {
                    j++;
                    sum-=arr[j];
                }
            }
            ans=max(ans,i-j);
        }
        cout<<ans<<endl;
}