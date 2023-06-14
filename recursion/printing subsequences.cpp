#include <iostream>
using namespace std;


void printSub(int ind,vector<int>&v,int arr[],int n)
{
	if(ind ==n)
	{
		for(int i=0;i<v.size();++i){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
	}

    printSub(ind+1,v,arr,n);
	v.push_back(arr[ind]);
	printSub(ind+1,v,arr,n);
    v.pop_back();
}
	
int main() {
	
	int arr[]={1,2,3,4,5};
    int n=5;
    vector<int>v;
    printSub(0,v,arr,n);
	
	return 0;
}