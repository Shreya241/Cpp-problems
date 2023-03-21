#include <bits/stdc++.h> 
using namespace std; 
class Minheap{
    int *arr;
    int size;
    int capacity;
    
    public:
    Minheap(int c){
        arr=new int[c];
        size=0;
        capacity=c;
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int x){
        if(size==capacity)return;
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0 && arr[i]<arr[parent(i)];){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
};

int main(){
    Minheap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20);
    return 0;
}