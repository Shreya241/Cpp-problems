#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node(int x){
    data=x;
    next=NULL;
  }
};

Node delHead(Node *first){
    if(first==NULL){
        return NULL;
    }else{
        Node *temp=first->next;
        delete first;
    }
}


int main(){
    Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);
first->next=second;
second->next=third;
    delHead(first);
    return 0;
}

