#include<iostream>
using namespace std;
int gcd(int a, int b){
  if(b==0){
    return a;
  }
  return gcd(b,a%b);
}
int main(){
  int a=10,b=37;
  cout<<"GCD is "<<gcd(a,b);
  return 0;
  }