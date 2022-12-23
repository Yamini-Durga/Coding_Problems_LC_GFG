Problem Statement: You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

Example 1:

Input Format:  array[] = {3,1,2,5,3}

Result: {3,4)

Explanation: A = 3 , B = 4 
Since 3 is appearing twice and 4 is missing

  Example 2:

Input Format: array[] = {3,1,2,5,4,6,7,5}

Result: {5,8)

Explanation: A = 5 , B = 8 
Since 5 is appearing twice and 8 is missing
  
Solution:

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> arr = {3,1,2,5,3};
    vector<int> arr = {3,1,2,5,4,6,7,5};
    int repeat, missing = arr.size();
    // repeated number
    for(int i=0; i<arr.size(); i++){
        if(arr[abs(arr[i])-1] < 0){
            repeat = abs(arr[i]);
            break;
        }
        arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
    }
    // missing number;
    for(int i=0; i<arr.size(); i++){
        missing = missing ^ i ^ abs(arr[i]);
    }
    missing = missing ^ repeat;
    cout<<"Repeat = "<<repeat<<" Missing = "<<missing<<endl;
    
    return 0;
}
