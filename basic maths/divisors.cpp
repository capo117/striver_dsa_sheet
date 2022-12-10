#include<iostream>
using namespace std;
int divisors(int n){
  for(int i=1;i<=n;i++)
  if(n%i==0){
    cout<<i<<" ";
  }
  
  

}
int main(){
  divisors(48);
  return 0;
}