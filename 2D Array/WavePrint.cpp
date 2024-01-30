// Problem statement:
// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.
// For eg:-

// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].

// Difficulty: Easy

#include <bits/stdc++.h> 
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> result;

    for(int i=0; i<mCols; ++i) {
        int k = nRows-1;
        for(int j=0; j<nRows; ++j) {

            if(i%2==0)
                result.push_back(arr[j][i]);
            else {
                result.push_back(arr[k][i]);
                --k;
            }
            
        }
    }

    return result;
}

int main() {
    int nRows = 3, nCols = 3;
    vector<vector<int>> arr{{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};

    vector<int> result;
    result = wavePrint(arr, nRows, nCols);

    for(int i=0; i<result.size(); ++i)
        cout << result[i] << " ";

    return 0;
}

//Problem Link: https://www.codingninjas.com/studio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6