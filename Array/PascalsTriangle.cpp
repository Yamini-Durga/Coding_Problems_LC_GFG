https://leetcode.com/problems/pascals-triangle/description/

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        int row = 0;
        res[row++].push_back(1);
        while(row < numRows) {
            res[row].push_back(1);
            for(int i=1; i<res[row-1].size(); i++) {
                res[row].push_back(res[row-1][i] + res[row-1][i-1]);
            }
            res[row].push_back(1);
            row++;
        }
        return res;
    }
