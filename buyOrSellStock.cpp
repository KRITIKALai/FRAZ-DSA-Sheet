#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minPrice = INT_MAX, maxProfit = INT_MIN;
    for(int i=0;i<prices.size();i++){
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i]-minPrice);
    }
    return maxProfit;
}
