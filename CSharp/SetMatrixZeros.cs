https://leetcode.com/problems/set-matrix-zeroes/

 public void SetZeroes(int[][] matrix) {
        int r = matrix.Length, c = matrix[0].Length, col0 = 0;
        // Mark the rows&cols which are need to be filled with 0's
        for(int i=0; i<r; i++)
        {
            if(matrix[0][0] == 0)
                col0 = 1;
            for(int j=0; j<c; j++)
            {
                if(matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
            }
        }
        // fill the rows&cols with 0's
        for(int i=r-1; i>=0; i--)
        {
            for(int j=c-1; j>=0; j--)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
            if(col0 == 1)
                matrix[i][0] = 0;
        }
    }
