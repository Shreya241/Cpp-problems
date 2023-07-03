#include <iostream>
using namespace std;


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int data[],int n){
    for(int i=0;i<n-1;i++){
        int m=i;
        for(int j=i+1;j<n;j++){
            if(data[j]<data[m]){
                m=j;
            }
        }
        swap(&data[m], &data[i]);
    }
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, size);
}

// Best	O(n2)
// Worst	O(n2)
// Average	O(n2)
// Space Complexity	O(1)
// Stability	No