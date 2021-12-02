// 121. Best Time to Buy and Sell Stock

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, minVal = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            res = max(res, prices[i] - minVal);
            minVal = min(minVal, prices[i]);
        }
        return res;
    }
};


int main()
{
#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    Solution s ;
    vector<int> prices;
    prices={7,1,5,3,6,4};
    int result = s.maxProfit(prices);
    cout<<result<<endl;

return 0;

}