#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int maxProfit(vector<int>& prices){
   int mxProfit = 0, bestBuy = prices[0];
   for(int i = 1; i<prices.size();i++){
       if(prices[i]>bestBuy){
          mxProfit = max(mxProfit,prices[i]-bestBuy);
       }
       bestBuy = min(bestBuy, prices[i]);
   }
  return mxProfit;
}

int main(){
  vector <int> ans = {7,1,5,3,6,4};
  int x = maxProfit(ans);
  cout<<x;
  return 0;
}