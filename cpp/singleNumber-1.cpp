class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        for(int i = 0; i<n; i++){
            idx = idx^nums[i];
        }
        return idx;
    }
};
