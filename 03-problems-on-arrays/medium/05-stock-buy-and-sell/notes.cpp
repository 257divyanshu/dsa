#include <bits/stdc++.h>
using namespace std;

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