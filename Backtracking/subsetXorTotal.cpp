//  1863 - Sum of All Subset XOR Totals

class Solution {
public:
    int calXor(vector<int> temp){
        int xor_arr = 0;
        for(int i=0; i<temp.size(); i++){
            xor_arr = xor_arr^temp[i];
        }
        return xor_arr;
    }
    
    int subsetSum(vector<int> &nums, vector<int> &temp, int i, int sum){
        if(i==nums.size()){
            sum+=calXor(temp);
            return sum;
        }
        int leftSum = subsetSum(nums, temp, i+1, sum);
        temp.push_back(nums[i]);
        int rightSum = subsetSum(nums, temp, i+1, sum);
        temp.pop_back();
        return leftSum + rightSum;
    }
    
    int subsetXORSum(vector<int>& nums) {
        vector<int> temp;
        return subsetSum(nums, temp, 0, 0);
    }
};