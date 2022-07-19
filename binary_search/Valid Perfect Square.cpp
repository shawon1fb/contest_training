//
// Created by shahanul on 19/7/22.
//

#include<bits/stdc++.h>

using namespace std;

bool isPerfectSquare(int num) {

    int start = 0;
    int end = num;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (mid * mid == num) {
            return true;
        } else if (mid * mid < num) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return false;


}


int main() {

    bool b = isPerfectSquare(25);

    cout << b << endl;
    return 0;
}