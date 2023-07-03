#include<iostream>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int data[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(data[j]>data[j+1]){
                 swap(&data[j],&data[j+1]);
            }
        }
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}

// optimised


void bubbleSort(int data[],int n){
    for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(data[j]>data[j+1]){
                 swap(&data[j],&data[j+1]);
                 swapped=1;
            }
        }
        if(swapped==0) break;
    }
}

// Best	O(n)
// Worst	O(n2)
// Average	O(n2)
// Space Complexity	O(1)
// Stability	Yes
// Adaptive     Yes