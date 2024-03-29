//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

Node* soltn(int in[],int post[],int ins,int ine,int &posIn){
    if(ins>ine) return NULL;
    Node* head=new Node(post[posIn--]);
    int inInd;
    for(int i=ins;i<=ine;i++){
        if(in[i]==head->data){
            inInd=i;
            break;
        }
    }
    head->right=soltn(in,post,inInd+1,ine,posIn);
    head->left=soltn(in,post,ins,inInd-1,posIn);
    return head;
}

Node *buildTree(int in[], int post[], int n) {
    int posIn=n-1;
    return soltn(in,post,0,n-1,posIn);
}
