#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Container{
  public:
        int maxAreaBrute(vector <int> & height){
           int maxWater = 0;
           int area = 0;
            int width =0;
            int ht = 0;
           for(int i =0;i<height.size();i++){
              for(int j = i+1;j<height.size();j++){
                   width = j-i;
                   ht = min(height[i],height[j]);
                   int currWater = ht * width;
                   maxWater = max(maxWater,currWater);
              } 
           }
           return maxWater;
           //O(n^2)
        }
        //Two Pointer
        int maxAreaOptimal(vector <int> & height){
            int maxWater = 0;
            int left = 0;
            int right = height.size()-1;
            while(left < right){
                int width = right - left;
                int ht = min(height[left],height[right]);
                int currWater = ht * width;
                maxWater = max(maxWater,currWater);
                if(height[left] < height [right]){
                    left++;
                }
                else{
                    right--;
                }
            }
            return maxWater;
            //O(n)
        }
    
};

int main(){


  return 0;
}