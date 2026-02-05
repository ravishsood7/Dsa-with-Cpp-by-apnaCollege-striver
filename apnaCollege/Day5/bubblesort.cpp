#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> bubbleSort(vector<int>& arr){
  int len = arr.size();
  for(int i = 0;i<len;i++){
     for(int j =0;j<len-i-1;j++){
         if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
         }
     }
  }
  return arr;
}


int main(){
  vector<int> arr = {4,1,5,2,3};
  for(int i: arr){
    cout<<i<<" ";
  }
  cout<<endl;
  bubbleSort(arr);
  for(int i: arr){
    cout<<i<<" ";
  }

  return 0;
}