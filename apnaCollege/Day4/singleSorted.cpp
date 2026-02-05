/*Single Element in sorted array
In an array there are elements which are sorted and appears exactly twice in the array
but there is one element in array which appears exactly once.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int singleElement(vector<int>& arr){
  int len = arr.size();
  for(int i =0;i<len-1;i++){
      if(arr[i]==arr[i+1]){
         i = i+1;
         continue;
      }
      else{
        return arr[i];
      }
  }
  return -1;
}

int sebs(vector<int>& arr){
    int start = 0;
    int end = arr.size()-1;

    while(start <= end){
        int mid = start + (end - start)/2;

        bool left_ok = (mid == 0 || arr[mid] != arr[mid-1]);
        bool right_ok = (mid == arr.size()-1 || arr[mid] != arr[mid+1]);

        if(left_ok && right_ok){
            return arr[mid];  // found the single element
        }

        if(mid > 0 && arr[mid] == arr[mid-1]){
            // The pair starts at mid-1, single element is on the left
            end = mid - 2;
        } else {
            // The pair starts at mid, single element is on the right
            start = mid + 2;
        }
    }

    return -1;
}

int main(){
 vector<int> arr = {1,1,2,3,3,4,4,8,8};
 cout<<"Single Element in an array is:-> "<<singleElement(arr);
 vector<int> arr2 = {3,3,7,7,10,11,11,11};
 cout<<"Single Element in an array is:-> "<<sebs(arr2);
  return 0;
}
