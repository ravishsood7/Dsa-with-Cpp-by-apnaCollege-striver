#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> productArrayBrute(vector <int> nums){
   int len = nums.size();
   vector <int> ans;
   
   for(int i =0;i<len;i++){
    int product = 1;
     for(int j=0;j<len;j++){
       if( i != j){
         product = product * nums.at(j);
       }
     }
     ans.push_back(product);
   }
   return ans;
}
vector<int> productArrayOptimal(vector <int> nums){
   int len = nums.size();
   vector <int> ans;
   
   for(int i =0;i<len;i++){
    int product = 1;
     for(int j=0;j<len;j++){
       if( i != j){
         product = product * nums.at(j);
       }
     }
     ans.push_back(product);
   }
   return ans;
}
int main(){
  vector <int> ans = {-1,1,0,-3,3};
  vector <int> as;
  as = productArrayBrute(ans);
  for(int n : as){
    cout<<n <<" ";
  }
  return 0;
}