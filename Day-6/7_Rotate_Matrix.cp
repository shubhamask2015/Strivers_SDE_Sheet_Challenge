void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int col = 0, row = 0, row_max = n-1, col_max = m-1;
    while(col < col_max  && row < row_max){
        int previous = mat[row+1][col], current;
        // Traversing top row
        for(int i = col; i < col_max; i++){
            current = mat[row][i];
            mat[row][i] = previous;
            previous = current;
        }

        // traversing right column
        for(int i = row; i < row_max; i++){
            current = mat[i][col_max];
            mat[i][col_max] = previous;
            previous = current;
        }
        
        // traversing bottom row
        for(int i = col_max; i > col; i--){
            current = mat[row_max][i];
            mat[row_max][i] = previous;
            previous = current;
        }

        // traversing left column
        for(int i = row_max; i > row; i--){
            current = mat[i][col];
            mat[i][col] = previous;
            previous = current;
        }
        
        col++;row++;
        row_max--; col_max--;
    }
}