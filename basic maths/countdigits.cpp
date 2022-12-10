#include<iostream>

using namespace std;
int count_digits(int n){
  int x=n;
  int count=0;
  while(x!=0){
    x=x/10;
    count++;
  }
  return count;
}
int main(){
  int n=34545987;
  cout<<"number of digits in "<<n<<" are "<< count_digits(n);
  return 0;
}
