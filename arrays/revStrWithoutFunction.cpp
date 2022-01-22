#include<stdio.h>
#include<string.h>

void revStr(char str[40]){
    int l=strlen(str);
    for(int i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
}


int main(){
    char str[40];
    scanf("%s",&str);
    revStr(str);
}
