//
// Created by shahanul on 26/6/22.
//


#include<bits/stdc++.h>

using namespace std;

int distributeCandies(vector<int> candies) {
    set<int> uniqueCandies(candies.begin(), candies.end());
    int typeOfCandies = uniqueCandies.size();
    int maxAllowedToEat = candies.size() / 2;
    int res = min(typeOfCandies, maxAllowedToEat);
    return res;
}


int main() {


    vector<int> candies = {1, 1, 2, 2, 3, 3,};

    int result = distributeCandies(candies);

    cout << result << "\n";

    return 0;
}
