//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
       int arr1[N],arr2[N];
       arr1[0]=A[0];
       arr2[N-1]=A[N-1];
       for(int i=1;i<N;i++){
           arr1[i]=min(arr1[i-1],A[i]);
       }
        for(int i=N-2;i>=0;i--){
           arr2[i]=max(arr1[i+1],A[i]);
       }
       
       
       int i=0,j=0;
       int ans=INT_MIN;
       while(i<N && j<N){
           if(arr1[i]<=arr2[j]){
               ans=max(ans,j-i);
               j++;
           }else i++;
       }
       return ans;
    }
    
    
    
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends