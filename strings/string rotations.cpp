#include <iostream>
#include<string>
using namespace std;

bool rev_stack(string str1,string str2){
  if(str1.length()!=str2.length()){
    return false;
  }

    str1=str1+str1;
    if(str1.find(str2)==-1){
      return false;
    }else{
        return true;
    
  }
}

int main(){
  string s="dylsebxjwlmpamjneoehhlgayxtgs";
  string p="lsebxjwlmpamjneoehhlgayxfgsdy";
  cout<<rev_stack(s,p);
}
