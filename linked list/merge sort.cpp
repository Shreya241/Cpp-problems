//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


// } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */


void merge(vector<int> &v, int low, int mid, int high)
    {
        int len1 = mid - low + 1, len2 = high - mid;
        int left[len1], right[len2];
        for (int i = 0; i < len1; ++i)
            left[i] = v[i + low];
        for (int i = 0; i < len2; ++i)
            right[i] = v[mid + i + 1];
        int i = 0, j = 0, idx = low;
        while (i < len1 && j < len2)
        {
            if (left[i] <= right[j])
                v[idx++] = left[i++];
            else
                v[idx++] = right[j++];
        }
        while (i < len1)
            v[idx++] = left[i++];
        while (j < len2)
            v[idx++] = right[j++];
    }

    void mergeSortUtil(vector<int> &v, int low, int high)
    {
        if (high > low)
        {
            int mid = low + (high - low) / 2;
            mergeSortUtil(v, low, mid);
            mergeSortUtil(v, mid + 1, high);
            merge(v, low, mid, high);
        }
    }


struct Node *sortDoubly(struct Node *head)
{
	vector<int>v;
	Node *tmp=head;
	while(tmp!=NULL){
	    v.push_back(tmp->data);
	    tmp=tmp->next;
	}
	mergeSortUtil(v,0,v.size()-1);
	tmp=head;
	int i=0;
	while(tmp!=NULL){
	    tmp->data=v[i];
	    i++;
	    tmp=tmp->next;
	}
	return head;
}


//{ Driver Code Starts.

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}

// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}

// } Driver Code Ends