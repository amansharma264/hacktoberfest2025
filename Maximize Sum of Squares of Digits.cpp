class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int total = num + sum;
        if(sum > 9*num || sum < 0) return "";
        string s = "";
        for(int i = 0; i<num; i++){
            int digit = min(9, sum);
            s.push_back('0' + digit);
            sum -= digit;
        }
        if(sum != 0) return "";
        return s;
    }
};
