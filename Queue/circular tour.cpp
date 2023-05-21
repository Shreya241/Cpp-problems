
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


class Solution{
  public:

    int tour(petrolPump p[],int n)
    {
       int sum=0;
       int ind=0;
       int bal=0;
       for(int i=0;i<n;i++){
           bal+=p[i].petrol-p[i].distance;
           if(bal<0){
               ind=i+1;;
               sum+=bal;
               bal=0;
           }
       }
       if(sum+bal>=0){
           return ind;
       }else{
           return -1;
       }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
