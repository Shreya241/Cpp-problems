#include <bits/stdc++.h>
#define int long long 
#include <algorithm>
#include <map>
#include <iostream>
#include <set>
#include <array> 
#include <deque>
#include <forward_list>
#include <list>
#include <iterator>
#include <vector>
#include <queue>
#include <climits>
#include <stack>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <tuple>
#define int long long 
using namespace std;
using namespace std;


void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int op = 0;
    int k = 0;
    int tp = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != '0')tp = 1;
    }

    if(tp == 0){
        cout << n << endl;
        return;
    }
    int i = 0;
    while(i < n){
        
        int j = i + 1;
        if(s[i] != '0'){
            int count = 0;
            if(s[i] == '+') k = 1;
            else k = -1;
            while(j < n and s[j] == '0'){
                count++;
                j++;
            }
            if(j < n and s[j] == '+' and k == -1){
                if(count & 1){
                    op++;
                    k = 1;
                    i = j;
                }else i = j;
            }else if(s[j] == '-' and k == 1){
                if(count & 1){
                    op++;
                    k = 1;
                    i = j;
                }else i = j;
            }else i = j;
        }else i++;
    }

    cout << op << endl;
}



signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}