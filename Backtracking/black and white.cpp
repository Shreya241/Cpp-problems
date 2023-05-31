//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M)
{
    long long mod = 1e9+7;
    long long ans = 0;
    int x[8] = {1, -1, 1, -1, 2, 2, -2, -2};
    int y[8] = {2, 2, -2, -2, 1, -1, 1, -1};
    long long total = N*M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            long long count = 0;
            for(int k=0;k<8;k++){
                if(i+x[k]>=0 && i+x[k]<N && j+y[k]>=0 && j+y[k]<M){
                   count++;
                }
            }
            ans+= ((total-count-1) % mod);
            ans = ans%mod;
        }
    }
    return ans;
}
