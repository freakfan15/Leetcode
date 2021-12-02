// 121. Best Time to Buy and Sell Stock

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        for(int i=0; i<prices.size(); i++){
            int curr_diff=0;
            for(int j=i+1; j<prices.size(); j++){
                curr_diff = max(curr_diff, prices[j]-prices[i]);
            }
            res = max(curr_diff, res);
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