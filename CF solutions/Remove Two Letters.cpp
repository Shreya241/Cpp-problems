#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        unordered_set<string>v;
        int i = 0;
        while (i < n-1) {
            if (str[i] == str[i+1]) {
                i++;
                continue;
            }
            string p=str.substr(0, i) + str.substr(i+2);
            v.insert(p);
            i++;
        }
        
        cout << v.size() << endl;
    }
    return 0;
}