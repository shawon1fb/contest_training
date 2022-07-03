//
// Created by shahanul on 1/7/22.
//

#include <bits/stdc++.h>

using namespace std;

int cnt =0;
void subsetsUtil(vector<int> &A, vector<vector<int> > &res,
                 vector<int> &subset, int index, int j) {

//    cout<<index<<" "<<j<<endl;

        res.push_back(subset);
    if (A.size() == index +1) {
        cnt++;
//        res.push_back(subset);
        return;
    }

    subset.clear();
    for (int i = j; i < A.size(); i++) {
        subset.push_back(A[i]);

    }
//    subset.push_back(A[j]);
//    res.push_back(subset);

    subsetsUtil(A, res, subset, index + 1, j + 1);
//    subset.pop_back();
    subsetsUtil(A, res, subset, index + 1, j);


    return;
}

// below function returns the subsets of vector A.
vector<vector<int> > subsets(vector<int> &A) {
    vector<int> subset;
    vector<vector<int> > res;

    // keeps track of current element in vector A;
    subsetsUtil(A, res, subset, 0, 0);

    cout<<cnt<<endl;
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
