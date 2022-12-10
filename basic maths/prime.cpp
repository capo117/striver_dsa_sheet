#include<iostream>
using namespace std;
bool prime(int n){
  for(int i=2;i<=n;i++){
  if(n%i==0){
   return false; 
  }
  return true;
  }
  
  

}
int main(){
  int n=12;
  bool ans = prime(n);
  if(n!=1 && ans==true){
    cout<<"is prime";

  }
  else{
    cout<<"not prime";
  }
  return 0;
}