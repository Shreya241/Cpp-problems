#include<stdio.h>
#define MAX 8

struct stack{
int arr[MAX];
int top;
}st;

int isempty(){
    if(st.top=-1){
        return 1;
    }else{
        return 0;
    }
}

int isfull(){
    if(st.top=MAX-1){
        return 1;
    }else{
        return 0;
    }
}

void pop(){
    int data;
 if(isempty()==1){
          printf("NO SUFFICIENT DATA");
    
 }
 else{
 data=st.arr[st.top];
     st.top=st.top-1;
     printf("The poped data is %d",data);
 }
}

void push(int data){

  if(isfull()==1){
      printf("FULL\n");
      
  }else{
      st.top=st.top+1;
      st.arr[st.top]=data;
      printf("%d is pushed",st.arr[st.top]);
  }
}

int main(){
    st.top=-1;
  while(1){
      printf("1.Push\n2.Pop\n3.IsEmpty\n4.IsFull\n5.Exit\n");
      int op;
      scanf("%d",&op);
      if(op==1){
          int x;
          scanf("%d",&x);
          push(x);
      }else if(op==2){
          pop();
      }else if(op==3){
          isempty();
      }else if(op==4){
          isfull();
      }else if(op==5){
          break;
      }
  }
    return 0;
}