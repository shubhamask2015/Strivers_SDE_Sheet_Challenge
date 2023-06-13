#include<bits/stdc++.h>

vector<int> nextPermutation(vector<int>& permutation, int n) {
    int i, x;
    for (i = n - 1; i > 0; i--) {
        if (permutation[i - 1] < permutation[i]) {
            break;
        }
    }

    if (i == 0) {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    int min = permutation[i], min_indx = i;
    for (int j = i + 1; j < n; j++) {
        if (permutation[j] > permutation[i - 1] && permutation[j] < min) {
            min = permutation[j];
            min_indx = j;
        }
    }

    swap(permutation[i - 1], permutation[min_indx]);
    reverse(permutation.begin() + i, permutation.end());

    return permutation;
}
