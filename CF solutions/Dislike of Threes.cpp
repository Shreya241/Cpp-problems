#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int i=1,m=0;
        while(m<n)
        {
            if(i%3!=0 && i%10!=3)
            {
               m++;
            }
            if(m==n){
                cout<<i<<endl;
            }
            i++;
        }
    }
}