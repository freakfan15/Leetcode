// 350. Intersection of Two Arrays II

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        multiset<int> s1;
        //add itmes of nums1 to set 1
        for(int num: nums1){
            s1.insert(num);
        }

        //look for items of nums2 in set 1:-
            // if found add to result and remove that item from set
        for(int num: nums2){
            if(s1.find(num)!=s1.end()){
                res.push_back(num);
                s1.erase(s1.find(num));
            }
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
    vector<int> nums1;
    vector<int> nums2;
    nums1={1,2,2,1};
    nums2={2,2};
    vector<int> result;
    result = s.intersect(nums1,nums2);
    for(int i: result)
    {
         cout<<i<<" ";
    }
    

return 0;

}