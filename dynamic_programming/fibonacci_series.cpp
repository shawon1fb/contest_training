//
// Created by shahanul on 6/4/22.
//


#include <bits/stdc++.h>


using namespace std;

map<int, int> fibMap;

int fib(int n) {

    if (n == 0 or n == 1) {
        return n;
    }

    if (fibMap[n] != 0) {
        return fibMap[n];
    }

    fibMap[n] = fib(n - 1) + fib(n - 2);

    return fibMap[n];

}


int main() {

    int nthFib = fib(5);

    printf("nth fib => %d", nthFib);

    return 0;
}
