/*
     Peak Index in mountain array
     arr = [ 0,3,8,9,5,2]
     peak element  = 9;


*/


#include<iostream>
#include<vector>
using namespace std;

int brPeak(vector<int>& b){
  int len = b.size()-1;
  for(int i=1;i<len;i++){
      if(b[i]>b[i+1] && b[i]>b[i-1]){
        return b[i];
      }
  }
  return 0;
}

int peakBS(vector<int>& arr){
  int start = 2;
  int end = arr.size()-2;
  while (start<=end){
    int mid = start + (end -start)/2;
    if(arr[mid-1]< arr[mid] && arr[mid+1]< arr[mid]){
          return mid; 
     }
    if(arr[mid-1]<arr[mid]){
        start = mid+1;
    } 
    else
    {
      end = mid -1; 
    }
  }
 
  return -1;
}


int main(){
  vector <int> arr = { 0,3,8,9,5,2};
  cout<<"Peak Element is:-> "<<brPeak(arr);
  return 0; 
}