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
  int n=78234;
  cout<<"reversed number is "<<reverse_digits(n);
  return 0;
}


