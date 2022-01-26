#include<iostream>
using namespace std;
int majorityWins(int arr[], int n, int x, int y) {
    int c_x=0;int c_y=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){c_x++;}
        if(arr[i]==y){c_y++;}
    } 
    if(c_x>c_y){return x;}
    else if(c_x==c_y){if(x<y){return x;}return y;}
    else{return y;}
   
}

int main(){
    int n=11,x=4,y=5;
    int arr[n] = {1,1,2,2,3,3,4,4,4,4,5};
    cout<<majorityWins(arr,n,x,y);
}