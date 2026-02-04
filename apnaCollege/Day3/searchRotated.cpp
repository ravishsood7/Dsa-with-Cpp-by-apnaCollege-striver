/*
  Search in rotated sorted array

  [3,4,5,6,7,0,1,2]

  mid = 6
  if( a[start] < a[mid]){
        lsorted
   }
  else if ( a[end] > a [ mid]){
       rsorted  
   }      
   
*/
#include <iostream>
#include <vector>
using namespace std;

int bsm(vector<int>& b, int target){
  int start = 0;
  int end = b.size()-1;
  while(start <= end){
    int mid = start + (end -start)/2;   
    if (b[mid] == target){
        return mid;
      }
    //left sorted 
    if(b[start]< b[mid]){
     if( target >= b[start] && target<=b[mid]){
          end = mid - 1;
        }
     else{
         start = mid + 1;
        }   
    }
    else{
       if(target>= b[mid] && target <= b[end])
       {
         start = mid + 1;
       }
       else{
        end  = mid - 1;
       }

    }   

  }

  return -1;

}
 
int main(){
  vector <int> arr1 = {3,4,5,6,7,0,1,2};
  int target = 0;
  cout<< bsm(arr1,target);  
  return 0;
}
