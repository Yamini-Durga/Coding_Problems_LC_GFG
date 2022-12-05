https://leetcode.com/problems/rotate-image/description/

void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), l, h;
        // transpose
        for(int r=0; r<n; r++){
            for(int c=r; c<n; c++){
                swap(matrix[r][c], matrix[c][r]);
            }
        }
        // reverse
        l = 0; h = n-1;
        while(l<h){
            for(int r=0; r<n; r++){
                swap(matrix[r][l], matrix[r][h]);
            }
            l++;h--;
        }
    }
