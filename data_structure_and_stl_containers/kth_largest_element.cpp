//
// Created by shahanul on 24/6/22.
//
/// an array of int given . i have to find the kth largest element from array after sorting (desc)
#include<bits/stdc++.h>

using namespace std;

int findKthLargest(vector<int> nums, int k) {
    sort(nums.begin(), nums.end(), greater<int>());
    return nums.at(k - 1);
}


int main() {
    vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};

    int k = 4;

    int result = findKthLargest(nums, k);

    cout << result << "\n";
    return 0;
}
