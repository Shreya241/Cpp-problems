#include<stdio.h>
#include<climits>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min,max;
    min=max=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]>max){
           max=arr[i];
       }
       if(arr[i]<min){
           min=arr[i];
       }
    }
    printf("%d %d",min,max);

}

/*-------------------*/
#include<stdio.h>
#include<climits>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=arr[0];j<=n;j++)
}

