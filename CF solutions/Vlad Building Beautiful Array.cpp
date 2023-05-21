#include <iostream>
#include <vector>

using namespace std;

string checkAndConvert(vector<int>& arr) {
    int even=0;
    bool one=false;
    int odd=0;
    int maxe=INT_MIN;
    int maxo=INT_MIN;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]==1){
            one=true;
        }
        if(arr[i]%2==0){
            even++;
            maxe=max(maxe,arr[i]);
        }else{
            odd++;
            maxo=max(maxo,arr[i]);
        }
    }
    if(even==arr.size() || odd==arr.size()){
        return "YES";
    }else if(odd>0){
        if(maxe<maxo){
        return "YES";
        }else{
        return "NO";
    }
    }else{
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string result = checkAndConvert(arr);
        cout << result << endl;
    }

    return 0;
}
