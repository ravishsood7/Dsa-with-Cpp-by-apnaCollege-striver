#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* Implement Pow(x,n) which  calculates x raised to power n */
class Solution{
  public:
        double myPow(double x, int n){
          int prod = 1;
          for(int i =1;i<=n;i++){
            prod = prod*x;
          }
          return prod;
        }
        double myPowsimple(double x , int n){
          long binForm = n;
          if(n<0){
            x = 1/x;
            binForm = -binForm;
          }
          double ans = 1;
          while(binForm > 0){
             if(binForm % 2 ==1){
              ans *= x;
             }
             x*=x;
             binForm/= 2;
          }
          return ans;
        }
};
int main(){
  Solution x;
  int  y = x.myPow(2,8);
  cout<<y<<endl;
  int z = x.myPowsimple(2,8);
  cout<<z<<endl;
  return 0;
}