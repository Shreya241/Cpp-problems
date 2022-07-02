#include<stdio.h>
#include<string.h>

int funct(int n, char str[100], char s[100][100]){
    int i=1;
    while(i<=n){
        if(!strcmp(str,s[i])){
            break;
        }
        i++;
    }
    return i;
}

int main(){
    int n;
    scanf("%d",&n);
    char str[100], s[100][100];
    int j=1;
    
    while(j<=n){
        scanf("%s",s[j]);
        j++;
    }

    scanf("%s",str);
    printf("%d",funct(n,str,s));
}