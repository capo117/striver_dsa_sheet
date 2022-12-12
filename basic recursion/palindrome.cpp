#include<iostream>
#include<algorithm>
using namespace std;
string isPalindrome(string y){
  string x=y;
  reverse(x.begin(),x.end());
  if(y==x){
    return "yes";
  }
  else{
    return "no";
  }
}
int main(){
  string y="ABCDCBAU";
  cout<<isPalindrome(y);
  return 0;
}
