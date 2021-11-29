// 1. Two sum

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1, j = n-1, idx = m + n - 1;
         while(i>=0 and j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[idx] = nums1[i];
                i--;
            }
            else{
                nums1[idx] = nums2[j];
                j--;
            }
            idx--;
         }

         //if elements of nums1 are left
         while(i>=0){
            nums1[idx] = nums1[i];
            idx--; i--;
         }
         while(j>=0){
            nums1[idx] = nums2[j];
            idx--; j--;
         }
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
    nums1={1,2,3,0,0,0};
    nums2={2,5,6};

    s.merge(nums1, 3, nums2, 3);
    for(int i: nums1)
    {
         cout<<i<<endl;
    }
    

return 0;

}