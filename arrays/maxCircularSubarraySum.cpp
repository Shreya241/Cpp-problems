#include<iostream>
using namespace std;
int normalMaxSum(int arr[],int n){
   int res=arr[0]; int maxEnd=arr[0];
   for(int i=1;i<n;i++){
       maxEnd=max(arr[i],maxEnd+arr[i]);
       res=max(maxEnd,res);
   }
   return res;
}

int overallMaxSum(int arr[], int n){
    int max_normal=normalMaxSum(arr,n);
    if(max_normal<0){
        return max_normal;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+normalMaxSum(arr,n);
    return max(max_normal,max_circular);
}

int main(){
    int n=7;
    int arr[n]={12,33,4,-1,2,0,-12};
    cout<<overallMaxSum(arr,n);

}