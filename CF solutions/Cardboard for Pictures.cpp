#include <bits/stdc++.h>  
#define int long long
using namespace std;
 
 
 bool check(int n, int c, vector<int>& sizes, int w) {
    int total_area = 0;
    for (int i = 0; i < n; ++i) {
        total_area += (sizes[i] + 2 * w) * (sizes[i] + 2 * w);
    }
    return total_area <= c;
}

int find_w_for_test_case(int n, int c, vector<int>& sizes) {
    int lower_bound = 0;
    int upper_bound = 1;
    while (check(n, c, sizes, upper_bound)) {
        upper_bound *= 2;
    }

    while (lower_bound < upper_bound) {
        int mid = (lower_bound + upper_bound) / 2;
        if (check(n, c, sizes, mid)) {
            lower_bound = mid + 1;
        } else {
            upper_bound = mid;
        }
    }

    return lower_bound - 1;
}
void funct(){
    int n;cin>>n;
  int c;cin>>c;
 vector<int> sizes(n);

        for (int j = 0; j < n; ++j) {
            cin >> sizes[j];
        }
        int result = find_w_for_test_case(n, c, sizes);
        cout << result << endl;
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