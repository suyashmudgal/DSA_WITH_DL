// wave print
#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> matrix, int nRows, int mCols) {

    vector<int> ans;

    for(int j = 0; j < mCols; j++) {

        // Even column → top to bottom
        if(j % 2 == 0) {
            for(int i = 0; i < nRows; i++) {
                ans.push_back(matrix[i][j]);
            }
        }

        // Odd column → bottom to top
        else {
            for(int i = nRows - 1; i >= 0; i--) {
                ans.push_back(matrix[i][j]);
            }
        }
    }

    return ans;
}