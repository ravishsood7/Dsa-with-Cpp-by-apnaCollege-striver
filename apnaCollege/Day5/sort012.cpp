#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int optimized(vector<int>& nums){
  int countOfZero = 0;
  int countOfOne = 0;
  int countOfTwo = 0;

  for(int i = 0;i<nums.size();i++){
    if(nums[i]==0){
      countOfZero++;
    }
    else if(nums[i]==1){
      countOfOne++;
    }
    else{
      countOfTwo++;
    }
  }
  int index = 0;
  for(int j =0;j<countOfZero;j++){
      nums[index++] = 0 ;
  }
  for(int j =0;j<countOfOne;j++){
      nums[index++] = 1 ;
  }
  for(int j =0;j<countOfTwo;j++){
      nums[index++] = 2 ;
  }

return 0;
}
//space constant and single pass and o(n)
/*
  3 pointer  -> low, mid , high
  0s -> 0 to low-1
  1s -> low to mid -1
  2s -> high+1  to n-1

  unsorted  -> (mid -- high)  try to minimize
  if mid = 0;
   swap(arr[l],arr[mid])
   low++
   mid++

   if mid = 1
    mid++
   
   if mid = 2
   swap(arr[h],arr[mid])
   h-- 

*/
int Dnfa(vector<int>& num){
  int len = num.size();
  int low  =0;
  int mid = 0;
  int high = len-1;
  while(mid <= high){
     if(num[mid] == 0){
       swap(num[low],num[mid]);
       low++;
       mid++;
     }
     else if(num[mid] == 1){
       mid++;
     }
     else{
      swap(num[high],num[mid]);
      high--;
     }

  }
  return 0;
}

int main(){
  vector<int> nums = {2,0,2,1,0,1};
  // sort(nums.begin(),nums.end());//O(nlogn)
  // for(int i: nums){
  //   cout<<i<<" ";
  // }
  // optimized(nums);
  // for(int i : nums){
  //   cout<<i<<" ";
  // }
  Dnfa(nums);
  for(int i : nums){
    cout<<i<<" ";
  }
  return 0;
}