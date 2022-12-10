#include<iostream>
using namespace std;
int reverse_digits(int n){
  int revnum=0;
  while(n>0){
  revnum=revnum*10 + n%10;
  n=n/10;
  }  
  return revnum;
}
int main(){
  int n = 12281;
  int blank = n;
  int revnum = reverse_digits(n);
  if(blank == revnum){
    cout<<"palindrome confirmed";
  }
  else{
    cout<<"not a palindrome";
  }
  return 0;
}