#include <bits/stdc++.h>
using namespace std;

// 📍 logic
// - We keep track of the lowest buying price seen so far and calculate the profit by selling at the current price. For each day, we update the maximum profit and then update the minimum buying price for future transactions.


// - dynamic programming is kind of 'remembering the past'

// 📍 optimal method
// TC -> O(n)
// SC -> O(1)
int maxProfit(vector<int> &prices)
{
    int maximumProfit = 0;
    int bestBuyPrice = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        maximumProfit = max(maximumProfit, prices[i] - bestBuyPrice);
        bestBuyPrice = min(prices[i], bestBuyPrice);
    }
    return maximumProfit;
}

int main()
{

    return 0;
};