//PairSum
/*
  Return pair in sorted array with target sum
*/
#include <iostream>
#include<vector>
using namespace std;
//brute force way
//o(n^2)
void findPair(){
  int arr[] ={2,56,11,150,7 };
  int target = 13;
  int len = sizeof(arr) / sizeof(int);
  for(int i = 0;i<len;i++){
      int ele = target - arr[i];
      for(int  j = i;j<len;j++){
          if (arr[j] == ele){
            cout<<arr[i] <<" , "<<arr[j]<<endl;
          }
      }
  }
}

//Optimized way to find the pair
//2 pointer
/*
 [ sorted arrar]
  ps > target  ------>    j--
  ps < target --------> i++
  ps = ans(i,j)

*/
vector<int> twoPointerPairSum(vector<int> v, int target){
  vector<int> ans;
  int len = v.size()-1;
  int sptr =0;
  int eptr = len;
  while(sptr < eptr){
       if((v[sptr]+v[eptr])== target){
          ans.push_back(v[sptr]);
          ans.push_back(v[eptr]);
          break;
       }
       else if((v[sptr]+v[eptr])< target)
       {
           sptr++;
       }
       else{
           eptr--;
       }
  }
  return ans;
}

int main(){
  // findPair();
   vector<int> v = {1, 2, 3, 4, 6, 8};
    int target = 11;

    vector<int> result = twoPointerPairSum(v, target);

    // display individual values
    if(result.size() == 2){
        cout << "Pair found: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}