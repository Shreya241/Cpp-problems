#include <string>
#include <iostream>
#include <stack> 
using namespace std;

string rev_stack(string str1){
   stack<char>stack;
   int l=str1.size();
   char* ans=new char[l];
   for(int i=0;i<l;i++){
    stack.push(str1[i]);
   }
   for(int i=0;i<l;i++){
    ans[i]= stack.top();
    stack.pop();
   }
   return ans;
}

int main(){
  string s="Shreya";
  cout<<rev_stack(s);
}
