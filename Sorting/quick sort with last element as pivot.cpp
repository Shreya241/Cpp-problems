#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int pivot(int arr[],int l,int h){
  int p=arr[h];
  int i=l-1;
  for(int j=l;j<h;j++){
    if(arr[j]<=p){
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[h]);
  return i+1;
}

void quickSort(int arr[],int s,int e){
  if(s<e){
  int piv=pivot(arr,s,e);
  quickSort(arr,s,piv-1);
  quickSort(arr,piv+1,e);
  }

}
int main() {
  int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);
  cout << "Unsorted Array: \n";
  printArray(data, n);
  quickSort(data, 0, n - 1);
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}


// Time Complexity	 
// Best	O(n*log n)
// Worst	O(n2)
// Average	O(n*log n)
// Space Complexity	O(log n)
// Stability	No