//
// Created by shahanul on 25/6/22.
//

/// a int list given
/// reducing the list size to 1 with minimum cost
/// cost : take any two element and remove them and append their sum to end

#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());


    int sum = 0;

    int first_num = pq.top();
    pq.pop();

    while (!pq.empty()) {
        int last_num = pq.top();
        pq.pop();
        sum += (first_num + last_num);
        pq.push((first_num + last_num));
        first_num = pq.top();
        pq.pop();
    }
    return sum;
}


int main() {

    vector<int> nums = {1, 2, 3, 4, 5};

    int result = solve(nums);

    cout << result << "\n";
    return 0;
}