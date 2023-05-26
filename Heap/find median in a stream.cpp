//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    priority_queue<int>f;
    priority_queue<int, vector<int>, greater<int>> s;
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(f.size()==0|| f.top()>x) f.push(x);
        else s.push(x);
        balanceHeaps();
        
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(f.size() > s.size() + 1) {
            s.push(f.top()); f.pop();
            
        } else if(s.size() > f.size()) {
            f.push(s.top()); s.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        double median;
        if(f.size() == s.size()) {
            median = (f.top() + s.top()) / 2.0;
        } else {
            median = f.top();
        }
        
        return median;
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends