/*
        Standard template library
         implementation code of data structure is already written
         vector

         vector<int> vec;
         vector<int> vec = {1,2,3};
         vector<int> vec(3,0);


         for each loop

         for(int i : vector name)
 predefined function used in vector functions

 size() ->  vector.size() to find size of vector
 push_back() -> to insert element in vector in last,  vector.push_back()
 pop_back() -> to insert element in vector in last, vector.pop_back()
 front() -> vector.front()  to print the front element of the array
 back()-> vector.back() to print the last element of the array
 at()-> accessing element at particular index vector.at(index)
 size -> number of elements present
 capacity -> number of elements it can store


*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//find the single number
 int singleNonDuplicate(vector<int> vec){
     int ans = 0;
     for(int i : vec){
        ans = ans ^ i;
        cout<< ans<<endl;
     }
     return ans;
 }

int main(){
  vector<int> ndp = {1,2,2,3,4,5,6,88,88,5,3};
  int x = singleNonDuplicate(ndp);
  cout<<"Non duplicate:->" <<x<<endl;

  vector<char> vec = {'a', 'b', 'c', 'd','e'};
  vector<int> num;
  cout<<"element at position 3 is "<<vec.at(2)<<endl;
  cout<<"Size of num "<<num.size()<<endl;
  num.push_back(10);
  num.push_back(20);
  cout<<"capacity"<<num.capacity()<<endl;
  cout<<"Size of num "<<num.size()<<endl;
  num.push_back(30);
  cout<<"capacity"<<num.capacity()<<endl;
  cout<<"Size of num "<<num.size()<<endl;
  cout<<"Front element of the vector "<<num.front()<<endl;
  cout<<"Last element of the vector "<<num.back()<<endl;
  for(int i: num){
    cout<<i<<" ";
  }
  cout<<endl;
  num.pop_back();
  for(int i: num){
    cout<<i<<" ";
  }
  cout<<endl;
  
  cout<<"Size of num "<<num.size()<<endl;
  cout<<vec[0]<<endl;
  for(char i : vec){
    cout<< i<<" ";
  }
  cout<<endl;
  cout<<"Size -> "<<vec.size()<<endl;
  return 0;
}

/*
      Static and dynamic allocation in memory



*/