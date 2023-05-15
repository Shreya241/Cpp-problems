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

void printList(Node *node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main(){
    Node *first=new Node(10);
Node *second=new Node(20);
Node *third=new Node(30);
first->next=second;
second->next=third;
    printList(first);
    return 0;
}

