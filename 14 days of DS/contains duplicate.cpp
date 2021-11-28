// 217. Contains Duplicate

#include <iostream>
#include <unordered_set>
using namespace std;



bool containsDuplicate(vector<int>& nums) {
	unordered_set<int> s;

	for(auto num: nums){
		if(s.find(num) != s.end()){ //meaning element is there in the set
			return true;
		}
		s.insert(num);
	}
	return false;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


return 0;

}