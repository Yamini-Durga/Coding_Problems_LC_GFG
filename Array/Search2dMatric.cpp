https://leetcode.com/problems/search-a-2d-matrix/description/

// C++ code
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // consider matrix as single array in sorted order
        // sorted array - use binary search
        int r = matrix.size(), c = matrix[0].size();
        int l = 0, h = (r*c)-1, mid;
        while(l<=h){
            mid = l + ((h-l)/2);
            if(matrix[mid/c][mid%c] == target)
                return true;
            else if(matrix[mid/c][mid%c] < target)
                l = mid+1;
            else
                h = mid-1;

        }
        return false;
    }

// C# code
public bool SearchMatrix(int[][] matrix, int target) {
        int r = matrix.Length, c = matrix[0].Length;
        int l = 0, h = (r*c)-1, mid;
        while(l<=h){
            mid = l + ((h-l)/2);
            if(matrix[mid/c][mid%c] == target)
                return true;
            else if(matrix[mid/c][mid%c] < target)
                l = mid+1;
            else
                h = mid-1;

        }
        return false;
    }
