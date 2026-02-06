#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int insertionSort(vector<int>& arr){
  int len = arr.size();
  for(int i =1;i<len;i++){
      int curr = arr[i];
      int prev = i-1;
      while(prev>=0 && arr[prev]>curr){
        arr[prev + 1] = arr[prev];
        prev --;
      }
      arr[prev+1] = curr;

  }
  return 0;
}

int main(){

   vector<int> arr = {4,1,5,2,3};
  for(int i: arr){
    cout<<i<<" ";
  }
  cout<<endl;
  insertionSort(arr);
  for(int i: arr){
    cout<<i<<" ";
  }

  return 0;
}