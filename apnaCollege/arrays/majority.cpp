// to find the majority element in an arry
/*
 So the majority element is one whose frequency is greater than [n/2]

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//brute force
int majority(vector<int> nums){
  int freq ;
  int n = (nums.size())/2;
  for(int v: nums){
    freq =0;  
    for(int ele: nums){
         if(v == ele){
            freq ++;
         }
      }
      if(freq> n){
         return v;
      }
  }
  return -1;
}

//after sorting

int main(){
   vector<int> n= {2,2,1,1,1,2,2,3,3,3,3,3,3,3,3};
   int x = majority(n);
   cout<<"Majority element is -> "<<x<<endl; 

  return 0;
}