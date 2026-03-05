class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {

        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++) {

            int p = nums[i];

            if (p == 2) {
                ans[i] = -1;
                continue;
            }

            int t = __builtin_ctz(p - 1);  // count trailing zeros
            ans[i] = p - (1 << t);
        }

        return ans;
    }
};