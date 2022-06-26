//
// Created by shahanul on 26/6/22.
//


#include<bits/stdc++.h>




/// problem  simple
/// let A B C is three rod
/// i have to go to rod c
/// so i will go to rod b first A-> B with help C
/// then go to c  B-> C with help A


/// A-> B using C
///  B-> C using A
using namespace std;


void towerOfHanoi(int n, char A, char B, char C) {
    if (n == 0) return;
    towerOfHanoi(n - 1, A, C, B);
    cout << A << " -> " << C << endl;
    towerOfHanoi(n - 1, B, A, C);
}

int main() {
    int n = 2;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}