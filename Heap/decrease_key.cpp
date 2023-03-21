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
    
    void minheapify(int i){
        int lt=left(i);int rt=right(i);
        int smallest=i;
        if(lt<size && arr[lt]<arr[i]){
            smallest=lt;
        }
        if(rt<size && arr[lt]<arr[smallest]){
            smallest=rt;
        }
        if(smallest!=i){
            swap(arr[i],arr[smallest]);
            minheapify(smallest);
        }
    }

    int extract_min(){
        if(size==0){
            return INT_MAX;
        }
        if(size==1){
            size--;
            return(arr[0]);
        }
        swap(arr[0],arr[size-1]);
        size--;
        minheapify(0);
        return arr[size];
    }

    void decrease_key(int i,int x){
        arr[i]=x;
        while(i!=0 && arr[i]<arr[parent(i)]){
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
    cout<<h.extract_min()<<" ";
    h.decrease_key(2, 1);
    cout<<h.extract_min()<<" ";
    return 0;
}