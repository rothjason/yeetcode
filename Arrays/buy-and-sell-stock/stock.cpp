/*
Objective: Design an algorithm that looks at an array of stock prices and determines
the maximum possible profit

Givens:
-Only able to buy on another day until first purchase is sold
-May buy/sell on as many days as possible
-May sell then buy on the same day

Algorithm Prototype:
int profit = 0;
for(int i = 0; i < v.size(); i++){
  if(v[i] < v[i+1]){
    profit += v[i+1]-v[i]
  }
}
return profit
}


*/


#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector <int> prices);

int main(){

  vector <int> v;
  v.push_back(6);
  v.push_back(6);
  v.push_back(3);
  v.push_back(7);
  v.push_back(8);
  v.push_back(8);

  cout << "Max profit: " << maxProfit(v) << endl;

  for (int i=0; i<v.size(); i++){
    cout << v[i] << ", ";
  }


}

int maxProfit(vector <int> prices){
  int profit = 0;
  for(int i=1; i < prices.size(); i++){
    if(prices[i-1] < prices[i]){
      profit += prices[i]-prices[i-1];
    }
  }
  return profit;\
}
