#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 20
int stack[MAX];
int top = -1;

void pop()
{
     stack[top--];
}

void push(char x)
{
    stack[++top] = x;
}

int main(){
 char bracket[MAX];
 top=-1;
    printf("Enter:");
    scanf("%s", &bracket);
    int i;
    
    for (i = 0; i < strlen(bracket); i++){
        if(bracket[i]=='('||bracket[i]=='{'||bracket[i]=='['){
            push(bracket[i]);
            continue;
        }
        else if(bracket[i]==')'||bracket[i]=='}'||bracket[i]==']'){
            if(bracket[i]==')'){
                if(stack[top]=='('){
                    pop();
                }else{
                    printf("WRONG");
                    break;
                }
            }
             if(bracket[i]=='}'){
                if(stack[top]=='{'){
                    pop();
                }else{
                    printf("WRONG");
                    break;
                }
            }
             if(bracket[i]==']'){
                if(stack[top]=='['){
                    pop();
                }else{
                    printf("WRONG");
                    break;
                }
            }
        }
    }
    if(stack[top]==-1){
        printf("BALANCED");
    }
}