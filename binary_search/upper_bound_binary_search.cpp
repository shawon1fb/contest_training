//
// Created by shahanul on 14/7/22.
//

#include <bits/stdc++.h>


using namespace std;


//int lower_bound_binary_search(vector<int> arr, int key) {
//    int ans = -1;
//
//    int start = 0;
//    int end = (arr.size() - 1);
//    while (start <= end) {
//        int mid = (start + end) / 2;
////        cout << start << " " << end << " " << mid << endl;
//        if (arr[mid] == key) {
//            ans = mid;
//            end = mid - 1;
//        } else if (arr[mid] < key) {
//            start = mid + 1;
//        } else {
//            end = mid - 1;
//        };
//    }
//
//
//    return ans;
//}


int upper_bound_binary_search(vector<int> arr, int key) {
    int ans = -1;

    int start = 0;
    int end = (arr.size() - 1);
    while (start <= end) {
        int mid = (start + end) / 2;
//        cout << start << " " << end << " " << mid << endl;
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        };
    }


    return ans;
}

int main() {

    vector<int> arr = {1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 10, 10};


//    cout << "lower bound => " << lower_bound_binary_search(arr, 10) << endl;
    cout << "upper bound => " << upper_bound_binary_search(arr, 10) << endl;
    return 0;
}

