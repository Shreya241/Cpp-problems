//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int matchGame(long long N) {
        int k=N%5;
        if(k==0){
            return -1;
        }else if(N==1){
            return 1;
        }else if(N==2){
            return 2;
        }else if(N==3){
            return 3;
        }else if(N==4){
            return 4;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.matchGame(N) << endl;
    }
    return 0;
}
// } Driver Code Ends