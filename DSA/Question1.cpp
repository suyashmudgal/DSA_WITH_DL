#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 1 || n == 2) {
        cout << 1;
        return 0;
    }

    int prev1 = 1, prev2 = 1, curr;

    for(int i = 3; i <= n; i++) {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    cout << curr;
    return 0;
}