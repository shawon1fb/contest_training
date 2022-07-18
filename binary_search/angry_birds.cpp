//
// Created by shahanul on 18/7/22.
//

#include <bits/stdc++.h>

using namespace std;


bool canPlaceABird(vector<int> nests, int B, int step) {
    int N = nests.size();
    int birds = 1;
    int location = nests[0];
    for (int i = 1; i < N; i++) {
        int currentLocation = nests[i];
        if ((currentLocation - location) >= step) {
            birds++;
            location = currentLocation;
        }
        if (birds == B) {
            return true;
        }
    }


    return false;

}


int main() {

    int Bird = 3;
    vector<int> nests = {1, 2, 4, 8, 9};
    sort(nests.begin(), nests.end());

    int N = nests.size();

    /// binary search

    int start = 0;
    int end = nests[N - 1] - nests[0];

    int ans = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        bool canPlaceBirds = canPlaceABird(nests, Bird, mid);
        if (canPlaceBirds == true) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "ans => " << ans << endl;

    return 0;
}