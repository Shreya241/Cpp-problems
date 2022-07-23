#include <iostream>
using namespace std;

bool rev_stack(string str){
    int count=0;
   for(int i=0;i<str.size();i++){
       if(str[i]=='0' || str[i]=='1'){
           count++;
       }else{
           return false;
       }
   }
   if(count==str.length()){
    return true;
   }
}

int main(){
  string s="010";
  cout<<rev_stack(s);
}
