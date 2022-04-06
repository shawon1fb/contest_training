//
// Created by shahanul on 7/4/22.
//

#include <bits/stdc++.h>


using namespace std;

map<int, int> possibleWays;

int countWays(int n, int k) {
    if (n == 0) {
        return 1;
    }

    if (n < 0) {
        return 0;
    }

    if (possibleWays[n] != 0) {
        return possibleWays[n];
    }

    int ans = 0;
    for (int jump = 1; jump <= k; jump++) {

        ans += countWays(n - jump, k);
    }

    possibleWays[n] = ans;
    return possibleWays[n];

}


/// leetcode Climbing Stairs solution
class Solution {
    map<int, int> possibleWays;
public:
    int climbStairs(int n) {
        if (n == 0) {
            return 1;
        }

        if (n < 0) {
            return 0;
        }

        if (this->possibleWays[n] != 0) {
            return this->possibleWays[n];
        }

        int ans = 0;
        for (int jump = 1; jump <= 2; jump++) {

            ans += climbStairs(n - jump);
        }

        this->possibleWays[n] = ans;
        return this->possibleWays[n];
    }
};

int main() {


    int n;
    scanf("%d", &n);

    int ways = countWays(n, 2);
//    int ways = Solution().climbStairs(3);
    printf("%d", ways);

    return 0;
}

