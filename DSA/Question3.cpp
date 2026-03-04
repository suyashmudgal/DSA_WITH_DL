//Common Elements In 3 Sorted Array 
#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(vector<int>& A, vector<int>& B, vector<int>& C) {

    int i = 0, j = 0, k = 0;

    vector<int> result;

    while(i < A.size() && j < B.size() && k < C.size()) {

        if(A[i] == B[j] && B[j] == C[k]) {

            if(result.empty() || result.back() != A[i])
                result.push_back(A[i]);

            i++;
            j++;
            k++;
        }

        else if(A[i] < B[j])
            i++;

        else if(B[j] < C[k])
            j++;

        else
            k++;
    }

    return result;
}