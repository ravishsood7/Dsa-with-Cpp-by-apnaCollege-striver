/*
 sorted array
 while(start <= end)
    tar> arr[mid] -> 2nd half
        start = mid+1
    tar< arr[mid] -> 1st half
        end = mid -1
    tar == mid  -> arr[mid]

    mid = st +(end - st)/2 ;
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(vector<int> &bs, int target){
  int len = bs.size();
  int start = 0;
  int end = len-1;
  
  while(start <= end){
     int mid = (start + end)/2;
     if(bs[mid] == target){
         return mid;
     }
     else if(bs[mid]<target){
         start = mid + 1;
     }
     else {
          end = mid - 1;
     }
  }
return -1;

}

int bsRecursive(vector <int>& b, int target, int start , int end){
   
    if (start > end) {
        return -1;   
    }
    int mid = start + (end- start)/2;
    if(target < b[mid] ){
       return bsRecursive(b,target,start, mid - 1);
    }
    else if(target > b[mid]){
      return bsRecursive(b,target,mid+1,end);
    }
    else{
      return mid;
    }
}

int main(){
  vector <int> arr1 = {-1,0,3,4,5,9,12};
  int tar1 = 12;
  int st1 = 0;
  int end1 = arr1.size()-1;
  vector <int> arr2 ={-1,0,3,5,9,12};
  int tar2 = 99;
  int st2 = 0;
  int end2 = arr2.size()-1;
  cout<< bsRecursive(arr1,tar1,st1,end1)<<endl;
  cout<< bsRecursive(arr2,tar2,st2,end2)<<endl;
  return 0;
}