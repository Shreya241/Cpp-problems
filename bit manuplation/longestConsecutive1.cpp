#include <bits/stdc++.h>
using namespace std;

int longest(int n){
    int count=0;
    while(n>0){
        if(n&1==1){
            count++;
        }else{
            count=0;
            
        }
        n=n>>1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout<<longest(n);
}
