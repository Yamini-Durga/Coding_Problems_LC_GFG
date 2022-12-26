Problem Statement: Given an array of N integers, count the inversion of the array (using merge-sort).

What is an inversion of an array? Definition: for all i & j < size of array, if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].

Example 1:

Input Format: N = 5, array[] = {1,2,3,4,5}

Result: 0

Explanation: we have a sorted array and the sorted array 
has 0 inversions as for i < j you will never find a pair 
such that A[j] < A[i]. More clear example: 2 has index 1 
and 5 has index 4 now 1 < 5 but 2 < 5 so this is not an 
inversion.
Example 2:

Input Format: N = 5, array[] = {5,4,3,2,1}

Result: 10

Explanation: we have a reverse sorted array and we will 
get the maximum inversions as for i < j we will always 
find a pair such that A[j] < A[i]. 
Example: 5 has index 0 and 3 has index 2 now (5,3) pair 
is inversion as 0 < 2 and 5 > 3 which will satisfy out 
conditions and for reverse sorted array we will get 
maximum inversions and that is (n)*(n-1) / 2.

For above given array there is 4 + 3 + 2 + 1 = 10 inversions.
Example 3:

Input Format: N = 5, array[] = {5,3,2,1,4}

Result: 7

Explanation: There are 7 pairs (5,1), (5,3), (5,2), (5,4),
(3,2), (3,1), (2,1) and we have left 2 pairs (2,4) and 
(1,4) as both are not satisfy our condition. 
 
# solution
  
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int left,  int mid, int right,
    vector<int> &temp){
    int i = left, j = mid+1, k = left, inv_c = 0;
    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            // how many elements are greater than current
            // element on the left side of it.
            inv_c += ((mid+1)-i);
        }
    }
    while(i <= mid)
        temp[k++] = arr[i++];
    while(j <= right)
        temp[k++] = arr[j++];
        
    for(int i=left; i<=right; i++)
        arr[i] = temp[i];
    return inv_c;
}

int merge_sort(vector<int> &arr, int left, int right,
    vector<int> &temp){
    int mid, inv_c = 0;
    if(left < right){
        mid = left + ((right - left) / 2);
        inv_c += merge_sort(arr, left, mid, temp);
        inv_c += merge_sort(arr, mid+1, right, temp);
        inv_c += merge(arr, left, mid, right, temp);
        cout<<"left = "<<left<<" mid = "<<mid<<" right = "<<right<<" inv_c = "<<inv_c<<endl;
    }
    
    return inv_c;
}

int main() {
    vector<int> arr = {5,3,2,1,4};
    vector<int> temp(arr.size(),0);
    int result = merge_sort(arr, 0, arr.size()-1, temp);
    cout<<"Total inverstion Count = "<< result <<endl;
    
    return 0;
}
