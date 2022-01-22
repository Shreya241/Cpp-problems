#include<stdio.h>
#include<string.h>

void funct(int n, char name[100][100]){
    int i=1;
    int max=1;
    int min=1;
    while(i<n){
        if(strlen(name[i+1])>strlen(name[i])){
            max=i+1;
            min=i;
        }else{
            max=max;
            min=min;
        }
        i++;
    }
    printf("%s\n%s",name[max],name[min]);

}

int main(){
    int n;scanf("%d",&n);
    char name[100][100];
    int j=1;
    while(j<=n){
        scanf("%s",name[j]);
        j++;
    }
    funct(n,name);
}