#include<stdio.h>
int main(){
    int n,i=1;
    scanf("%d",&n);
    while(i<=n){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
              printf("%d ",i);
        
            
        }
           printf("\n");
        i++;
    }
 
}