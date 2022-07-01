//
// Created by shahanul on 1/7/22.
//

#include<bits/stdc++.h>

using namespace std;
int X;
int K;

bool compareInterval(int a, int b) {
    if ((abs(a - X) < abs(b - X)) || (abs(a - X) == abs(b - X)) && (a < b)) {
        return true;
    }

    return false;

}


vector<int> findClosestElements(vector<int> arr, int k, int x) {
    X = x;
    K = k;
    sort(arr.begin(), arr.end(), compareInterval);
    vector<int> res;

    for (int i = 0; i < K; i++) {
        res.push_back(arr[i]);
    }

    sort(res.begin(), res.end());
    return res;
}


int main() {


    vector<int> arr = {1, 2, 3, 4, 5};


    vector<int> res = findClosestElements(arr, 4, 3);


    for (int i = 0; i < K; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}