//
// Created by shahanul on 1/7/22.
//

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    void subsetUtils(vector<int> &nums, vector<vector<int>> &res, vector<int> subset, int i) {

        if (i == nums.size()) {
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        subsetUtils(nums, res, subset, i + 1);
        subset.pop_back();
        subsetUtils(nums, res, subset, i + 1);


    }

    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> res;
        vector<int> subset;
        subsetUtils(nums, res, subset, 0);

//    cout << "ok";
        return res;
    }
};


// Driver Code.
int main() {
    // find the subsets of below vector.
    vector<int> array = {1, 2, 3};

    // res will store all subsets.
    // O(2 ^ (number of elements inside array))
    // because at every step we have two choices
    // either include or ignore.
    vector<vector<int> > res = Solution().subsets(array);

    // Print result
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}
