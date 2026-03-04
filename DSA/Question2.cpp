//Find the first element in the array that repeats (whose second occurrence appears earliest).
#include <bits/stdc++.h>
using namespace std;

int firstRepeatingElement(vector<int>& arr) {

    unordered_set<int> seen;
    int ans = -1;

    for(int i = arr.size() - 1; i >= 0; i--) {

        if(seen.count(arr[i])) {
            ans = arr[i];
        }

        seen.insert(arr[i]);
    }

    return ans;
}