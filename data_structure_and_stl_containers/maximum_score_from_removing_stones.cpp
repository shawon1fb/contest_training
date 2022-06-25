//
// Created by shahanul on 25/6/22.
//


#include<bits/stdc++.h>

using namespace std;

int maximumScore1(int a, int b, int c) {
    int ans = 0;
    priority_queue<int> q;
    q.push(a);
    q.push(b);
    q.push(c);
    while (q.size() > 1) {
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        x--;
        y--;
        if (x) {
            q.push(x);
        }
        if (y) {
            q.push(y);
        }
        ans++;
    }
    return ans;
}

int maximumScore(int a, int b, int c) {
    vector<int> arr = {a, b, c};
    sort(arr.begin(), arr.end());
    int res = arr[0];

    while (arr[0]) {
        arr[0]--;
        if (arr[1] < arr[2]) {
            arr[2]--;
        } else {
            arr[1]--;
        }
    }
    int second_time_min = min(arr[2], arr[1]);
    res += second_time_min;
    return res;
}


int main() {

//    int result = maximumScore1(11, 18, 23);
    int result = maximumScore(11, 18, 23);

    cout << result << endl;

    return 0;
}