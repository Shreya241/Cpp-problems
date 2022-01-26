#include<iostream>
#include<cmath>
using namespace std;


int median(int A[],int N)
    {
        int med=0;
        if(N%2==0){
           med=A[(N-1)/2];
        }
        else{
           med=A[N/2];
        }
        return med;
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
     return sum/N;
    }

int main(){
    int n=4;
    int arr[n]={2,3,4,8};
    cout<<median(arr,n)<<endl;
    cout<<mean(arr,n);
}

