////
//// Created by shahanul on 1/7/22.
////
//
#include <bits/stdc++.h>

using namespace std;


void generateBrackets(string output, int n, int open, int close, int pos) {

    // base case n * 2 == pos
    if (pos == n * 2) {
        cout << output << endl;
        return;
    }

    /// opening bracket


    if (open < n) {
        output += '(';
        generateBrackets(output, n, open + 1, close, pos + 1);

        output.pop_back();
    }

    /// closing bracket

    if (close < open) {
        output += ')';
        generateBrackets(output, n, open, close + 1, pos + 1);
    }
}


int main() {

    string output = "";
    int n;
    cin >> n;
    generateBrackets(output, n, 0, 0, 0);
    return 0;
}


