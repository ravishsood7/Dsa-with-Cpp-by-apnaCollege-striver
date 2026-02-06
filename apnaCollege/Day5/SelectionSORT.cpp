#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int selectionSort(vector<int>& arr){
 int len = arr.size();
 for(int i = 0;i<len;i++){
     int smallestIndex = i;
     for(int j = i+1;j<len;j++){
         if(arr[j]<arr[smallestIndex]){
             smallestIndex = j;
         }
     }
     swap(arr[i],arr[smallestIndex]);
 }
 return 0;
}

int main(){

  vector<int> arr = {4,1,5,2,3};
  for(int i: arr){
    cout<<i<<" ";
  }
  cout<<endl;
  selectionSort(arr);
  for(int i: arr){
    cout<<i<<" ";
  }

  return 0;
}