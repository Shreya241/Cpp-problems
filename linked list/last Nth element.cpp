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

int getMiddle(Node *head)
    {
        Node* p=head;
        int c=0;
        while(p->next!=NULL){
            c++;
            p=p->next;
        }
        Node* q=head;
        int n=((c+1)/2)+1;
        int i=1;
        while(i<n){
            q=q->next;
            i++;
        }
        return q->data;
    }


int main(){
Node *first=new Node(1);
Node *second=new Node(2);
Node *third=new Node(3);
Node *f=new Node(4);
Node *fi=new Node(5);
first->next=second;
second->next=third;
third->next=f;
f->next=fi;
    cout<<getMiddle(first);
    return 0;
}

