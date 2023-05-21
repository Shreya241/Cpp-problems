//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

    void kthSmallestNum(int n, vector<vector<int> >&r, int q, vector<int>que){

        int ind=0;
        int s=0,e=0;
        for(int i=1;i<n;i++){
            if(r[ind][1]>=r[i][0]){
                s=min(r[ind][0],r[i][0]);
                e=max(r[ind][1],r[i][1]);
                r[ind][0]=s;
                r[ind][1]=e;
            }else{
                ind++;
            }
        }

        vector<int>v;
        for(int i=0;i<=ind;i++){
            int a=r[i][0];
            int b=r[i][1];
            while(a<=b){
                v.push_back(a);
                a++;
            }
        } 

        vector<int>ans;
        for(int i=0;i<q;i++){
            if(v.size()==1 && que[i]==1){
                ans.push_back(v[0]);
            }
            else if(que[i]<v.size()){
                ans.push_back(v[que[i]-1]);
            }else{
                ans.push_back(-1);
            }
        }
        for(int i=0;i<ans.size();i++){
            cout << ans[i] <<endl;
        }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int> >range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    kthSmallestNum(n, range, q, queries);
	}
	return 0;
}

// } Driver Code Ends