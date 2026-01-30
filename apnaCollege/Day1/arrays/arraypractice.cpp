//Kadane Algorithm
/*
   Maximum Subarray Sum
   number of subarray == n * (n+1) /2

*/

//to print all subarray
#include<iostream>
#include<algorithm>
using namespace std;

void findAllSubarray(int arr[], int len){
for(int st =0; st<len;st++)
  {
    for(int end =0;end<len;end++){
        for(int  i = st; i<=end;i++){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
  }
}

int maxSumSubArray(int arr[], int n){
    int maxSum = INT_MIN;
    int start = 0, end = 0;

    for(int st = 0; st < n; st++){
        int currSum = 0;
        for(int en = st; en < n; en++){
            currSum += arr[en];

            if(currSum > maxSum){
                maxSum = currSum;
                start = st;
                end = en;
            }
        }
    }

    cout << "Max Subarray Sum = " << maxSum << endl;
    cout << "Subarray indices: " << start << " to " << end << endl;
    cout << "Subarray elements: ";

    for(int i = start; i <= end; i++)
        cout << arr[i] << " ";

    cout << endl;

    return maxSum;
}

// max sub array kadane 's algorithm
/*
  

*/
 int kadaneMaxSubArray(int arr[], int l){
  int currSum =0;
  int maxSum = INT_MIN;
  int sindex = 0;
  int lindex =0;
  for(int i =0;i<l;i++){
      currSum = currSum + arr[i];
      maxSum = max(currSum,maxSum);
      if(currSum<0){
        currSum = 0;
        sindex = i+1;
        continue;
      }
    lindex = i-1;
  }
  for(int i = sindex;i<lindex;i++){
    cout<<arr[i]<<" " ;
  }
   cout<<endl;
  return maxSum;
 }

int main(){
 int n =9;
 int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
//  findAllSubarray(arr, n);
//  cout<<maxSumSubArray(arr,n)<<" is max sum";
cout<< "Max of Subarry is "<<kadaneMaxSubArray(arr,n);

  return 0;
}