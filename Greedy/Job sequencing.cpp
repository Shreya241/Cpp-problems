#include<bits/stdc++.h>
using namespace std; 

struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


class Solution 
{
    public:
    static bool cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,cmp);
        int md=0;
        for(int i=0;i<n;i++){
            md=max(md,arr[i].dead);
        }
        vector<int>v(md+1,-1);
        int c=0;
        int totp=0;
        for(int i=0;i<n;i++){
            for(int k=arr[i].dead;k>0;k--){
                if(v[k]==-1){
                    v[k]=arr[i].id;
                    c++;
                    totp+=arr[i].profit;
                    break;
                }
            }
        }
        vector<int>ans;
        ans.push_back(c);
        ans.push_back(totp);
        return ans;
    } 
};

int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}