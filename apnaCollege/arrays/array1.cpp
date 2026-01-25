/*
     Array data structure
     linear data structure , contiguos memory
     int marks[5];  // array creation
     [100,104,108,112,116]
*/

#include <iostream>
#include <algorithm>
using namespace std;
class ArrayDs{
  public:
   void arryCreation(){
     int marks[10000];
     cout<<sizeof(marks)<<endl;

     for(int i =0;i<10000;i++){
       marks[i] = 100 +i;
     }
     for(int i =0;i<10000;i++){
         cout<<marks[i]<<" ";
     }
   }
   void findSmallestInArray(){
     int arr[] = { 12,35,335,15,35,31,21,47,98,3};
     int len = sizeof(arr)/ sizeof(int);
     int smallest = arr[0];
     for(int i = 1; i<len;i++){
         if(smallest > arr[i]){
            smallest = arr[i];
         }
     }
     cout<<"Smallest number is :-> "<<smallest<<endl;
   }
    void findLargestInArray(){
     int arr[] = { 12,35,335,15,35,31,21,47,98,3};
     int len = sizeof(arr)/ sizeof(int);
     int largest = arr[0];
     for(int i = 1; i<len;i++){
         if(largest < arr[i]){
            largest = arr[i];
         }
     }
     cout<<"Largest number is :-> "<<largest<<endl;
   }
   int linearSearch(int arr[],int element, int len){
        
        for(int i = 0;i<len;i++){
            if (arr[i] == element){
              return (i+1);
            }
        }
        return -1;
   }
   //Reverse array without new memory array
   //two pointer
   //swap is function in cpp
   void reverseArray(int arr[], int len){
      int start = 0;
      int end = len - 1;
      while(start < end){
           swap(arr[start], arr[end]);
           start++;
           end--;
      }    
   }

   void SumProductArray(int arr[], int len, int &sum, int &prod){
      sum = 0;
      prod = 1;
      for(int i =0 ; i<len;i++){
          sum = sum + arr[i];
          prod = prod * arr[i];
      }
   }
    int maxArray(int arr[], int len){
        int max = arr[0];
        int  index =0;
        for(int i =1;i<len;i++){
          if(max < arr[i]){
            max = arr[i];
            index = i;
          }
        }
        return index;
    }
    int minArray(int arr[], int len){
        int min = arr[0];
        int index =0;
        for(int i =1;i<len;i++){
          if(min > arr[i]){
            min = arr[i];
            index = i;
          }
        }
        return index;
    }
   //Swap max and min number of arry
   void swapmaxmin(int arr[], int len){
        int maxElement = maxArray(arr,len);
        int minElement = minArray(arr,len);
        swap(arr[maxElement], arr[minElement]);
   }

   //Print unique elements in array
  //  void printUnique(int arr[], int len){
  //   int sptr = 0;
  //   int fptr = 1;
  //   int index = 0;
    
  //   while(fptr < len){
  //        while(arr[sptr] == arr[fptr]){
  //          fptr++;
  //        }
  //        sptr = fptr;
  //        fptr++;
  //        cout<<
         


  //   }
  //  }
 // Print the intersection of 2 arrays
};

int main(){
  int x = INT_MAX;
  int arr[] ={10,96,89,36,26,12,54};
  int len = sizeof(arr)/sizeof(int);
  cout<< min(36,69)<<endl;
  cout<< x<<endl;
  ArrayDs obj;
  // obj.arryCreation();
  obj.findSmallestInArray();
  obj.findLargestInArray();
  int index = obj.linearSearch(arr,89,len);
  cout<<"Element 89 is found at index -> "<<index<<endl;
  for(int i = 0;i<len;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  obj.reverseArray(arr,len);
  for(int i = 0;i<len;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int sum ;
  int prod;
  obj.SumProductArray(arr,len, sum, prod);
  cout<<sum<<endl;
  cout<<prod<<endl;

  cout<<"SWAP MAX MIN"<<endl;
  for(int i = 0;i<len;i++){
    cout<<arr[i]<<" ";
  }
  obj.swapmaxmin(arr,len);
  cout<<endl;
  for(int i = 0;i<len;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
