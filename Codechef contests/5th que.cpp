#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a==b && b==c && c==a){
            cout<<0<<endl;
            continue;
        }
        int arr[3];
        arr[0]=a,arr[1]=b,arr[2]=c;
        sort(arr,arr+3);
        if( (arr[2] - arr[0])% 2!=0){
    	cout << "-1\n";
    	continue;
    }
         int k = ( arr[2] - arr[0])/2;
            arr[0]+=k;
            arr[1]+=k;
            arr[2]-=k;
         if ( (arr[1] - arr[0])%2!=0 ){
    	  cout << "-1\n";
    	  continue;
    }
        k += (arr[1] - arr[0] )/2;
        cout << k << endl;
        }
    }
