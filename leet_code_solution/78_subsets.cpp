//
// Created by shahanul on 1/7/22.
//

#include <bits/stdc++.h>

using namespace std;

int cnt =0;
void subsetsUtil(vector<int> &A, vector<vector<int> > &res,
                 vector<int> &subset, int index) {

  if (A.size() == index ) {
        cnt++;
        res.push_back(subset);
        return;
    }

    subset.push_back(A[index]);
    subsetsUtil(A, res, subset, index + 1 );

    subset.pop_back();
    subsetsUtil(A, res, subset, index + 1);

}

// below function returns the subsets of vector A.
vector<vector<int> > subsets(vector<int> &A) {
    vector<int> subset;
    vector<vector<int> > res;

    // keeps track of current element in vector A;
    subsetsUtil(A, res, subset, 0);;
    return res;
}

// Driver Code.
int main() {
    // find the subsets of below vector.
    vector<int> array = {1, 2, 3};

    // res will store all subsets.
    // O(2 ^ (number of elements inside array))
    // because at every step we have two choices
    // either include or ignore.
    vector<vector<int> > res = subsets(array);

    // Print result
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}
