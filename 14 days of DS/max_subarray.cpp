// 53. Maximum subarray
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curr_max = 0;
        for(auto num: nums){
        	curr_max += num;
        	if(curr_max > maxSum){
        		maxSum = curr_max;
        	}
        	if(curr_max < 0){
        		curr_max = 0;
        	}
        }

        return maxSum;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


return 0;

}