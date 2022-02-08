// 258. Add Digits


class Solution {
    
    int sumDigits(int n){
        int sum = 0;
        while(n!=0){
            int r = n%10;
            sum+=r;
            n = n/10;
        }
        return sum;
    }
public:
    int addDigits(int num) {
        while(num - 10 >= 0){
            int curr_sum = sumDigits(num);
            num = curr_sum;
        }
        return num;
    }
};