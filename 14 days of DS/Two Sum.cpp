// 1. Two sum

#include <iostream>
#include <map>
using namespace std;


    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
        	int x = target - nums[i];
        	if(m.find(x)!=s.end()){
        		auto p = m.find(x);
        		v.push_back(p->second);
        		v.push_back(x);
        		return v;
        	}
        	else{
        		m.insert(make_pair(nums[i],i));
        	}
        }
    }


int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

    Solution s ;
    vector<int> v;
    v={1,6,3,2,5};
    vector<int> result= s.twoSum (v, 11);
    for(int i: result)
    {
         cout<<i<<endl;
    }
return 0;



return 0;

}