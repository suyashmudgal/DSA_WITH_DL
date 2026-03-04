//Given an array of size n containing numbers from 1 to n, some numbers appear twice and some are missing.
//Return the missing elements.

#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {

    int n = nums.size();

    // Mark visited indices
    for(int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;

        if(nums[index] > 0)
            nums[index] = -nums[index];
    }

    vector<int> result;

    // Find missing numbers
    for(int i = 0; i < n; i++) {
        if(nums[i] > 0)
            result.push_back(i + 1);
    }

    return result;
}