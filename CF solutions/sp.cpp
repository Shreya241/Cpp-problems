#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> inputSeq;
        int sum = 0;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            
            inputSeq.push_back(num);
            sum += abs(num);
        }
        
        vector<int> processedSeq;
        
        for (int i = 0; i < n; i++) {
            if (inputSeq[i] != 0)
                processedSeq.push_back(inputSeq[i]);
        }
        
        if (processedSeq.size() <= 0)
            cout << 0 << " " << 0 << endl;
        else {
            int prev = processedSeq[0];
            
            for (int i = 1; i < processedSeq.size(); i++) {
                if (processedSeq[i] > 0 && prev < 0) {
                    count++;
                }
                prev = processedSeq[i];
            }
            
            int p = processedSeq.size();
            
            if (processedSeq[p - 1] < 0)
                count++;
            
            cout << sum << " " << count << endl;
        }
    }
    
    return 0;
}