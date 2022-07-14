//
// Created by shahanul on 14/7/22.
//

#include <bits/stdc++.h>

using namespace std;


int binary_search(vector<int> arr, int key) {

    int start = 0;
    int end = (arr.size() - 1);

    while (start <= end) {

        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;


}


int main() {
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8, 9, 10, 20, 25, 30};
    cout << binary_search(arr, 2) << endl;
    return 0;
}