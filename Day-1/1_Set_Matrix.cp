#include <bits/stdc++.h>
void setZeros(vector<vector<int>>& matrix) {
    int row0 = 1, i = 0, j = 0, m = matrix.size(), n = matrix[0].size();
    for (; i < m; i++) {
        for (j = 0; j < n; j++) { // Reset j to 0 at the start of each row
            if (i == 0 && matrix[i][j] == 0) {
                matrix[0][j] = 0;
                row0 = 0;
            } else if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
	// return;
    for (i = 1; i < m; i++) {
        for (j = 1; j < n; j++) {
			// if(!matrix[i][j]){
				if (matrix[i][0] == 0 || matrix[0][j] == 0) {
					matrix[i][j] = 0;
				}
			// }
        }
    }

	if(matrix[0][0] == 0){
		for (j = 0; j < m; j++) {
            matrix[j][0] = 0;
        }
	}

    if (!row0) {
        for (j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

}
