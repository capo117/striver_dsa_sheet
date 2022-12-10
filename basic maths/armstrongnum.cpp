#include<iostream>
#include<math.h>
using namespace std;
bool armstrong(int n){
int ogn=n;
int count=0;
int num=n;
while(num!=0){
  count++;
  num=num/10;
}
int sop=0;
while(n!=0){
  int number=n%10;
  sop=sop+ pow(number,count);
  n=n/10;
}
return(sop==ogn);
}
int main(){
  int n1=150;
  if (armstrong(n1)){
    cout<<"armstrong number";

  }
  else{
    cout<<"not an armstrong number";
  }
  return 0;
}