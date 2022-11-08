https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/0

int largest(vector<int> &arr, int n)
    {
        int maxVal = arr[0];
        for(int i=1; i<n; i++){
            maxVal = max(arr[i], maxVal);
        }
        return maxVal;
    }
