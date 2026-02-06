/*Merge Two Sorted Arrays*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, vector<int>& nums2){
  int m = 3  ;
  int n = 3  ;
  int idx = m+n-1;
  int i = m-1;
  int j = n-1;
  while(i>=0 && j>=0){
    if(nums1[i] >= nums2[j])
     {
       nums1[idx-- ] = nums1[i--];
     }else{
       nums1[idx--] = nums2[j--];
     }
  }
  while(j>=0){
    nums1[idx--] = nums2[j--];
  }

}

int main(){
  vector<int> nums1 = {1,2,3,0,0,0};
  vector<int> nums2 = {2,5,6};
  merge(nums1,nums2);
  for(int i : nums1){
    cout<<i<<" ";
  }
  return 0;
}