//
// Created by shahanul on 28/6/22.
//
#include <bits/stdc++.h>

using namespace std;

void generate(int pos, int sw, string input) {

    if (pos == sw) {
        cout << input << "" << endl;
    } else {

        for (int i = pos; i <= sw; i++) {
            swap(input[pos], input[i]);
            generate(pos + 1, sw, input);
            swap(input[i], input[pos]);
        }
    }
}

int main() {

    string input = "abc";

    generate(0, input.length() - 1, input);

    return 0;
}