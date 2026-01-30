// 0001
// 0010
// 0011
// 0100
// 0101
// 0110
// 0111
// 1000
// 1001
// 1010

#include <iostream>
using namespace std;

int dtob(int n){
  int rem = 0 ;
  int ans = 0 ;
  int pow = 1;
  while(n>0){
  rem = n % 2;
  ans = ans +  rem * pow;
  pow = pow * 10;  
  n = n/2; 
 }
 return ans;
}

int btod(int n){
  int pow = 1;
  int rem;
  int sum = 0;
  while(n>0){
    rem = n % 10; 
    sum = sum + (rem * pow);
    pow = pow * 2;
    n = n /10; 
  }
  return sum;
}
int main(){
  int x = dtob(10);
  cout<<"dtob -> "<<x<<endl;

  int y = btod(1010);
  cout<<"btod -> "<<y<<endl;
  return 0;
}
