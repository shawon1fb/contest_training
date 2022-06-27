//
// Created by shahanul on 28/6/22.
//

#include<bits/stdc++.h>

using namespace std;

int n;

map<char, string> mapping = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
};


void generate(int pos, string digits, vector<string> &ans, string &cursor) {
    if (pos == n) {
        ans.push_back(cursor);
        return;
    }
    char number = digits[pos];
    string lettersForNumber = mapping[number];
    for (auto cur: lettersForNumber) {
        cursor.push_back(cur);
        generate(pos + 1, digits, ans, cursor);
        cursor.pop_back();
    }
}


vector<string> letterCombinations(string digits) {
    vector<string> ans;
    n = digits.size();

    if (n == 0) {
        return ans;
    }


    string cursor;
    generate(0, digits, ans, cursor);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<string> s = letterCombinations("23");

    for (auto v: s) {
        cout << v << endl;
    }
    return 0;
}