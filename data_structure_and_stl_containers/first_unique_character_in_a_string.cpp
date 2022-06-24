//
// Created by shahanul on 24/6/22.
//

/// in this problem i have to find the non - repeating char in string


#include <bits/stdc++.h>

using namespace std;

int firstUniqChar(string s) {

    /// char count map
    map<char, int> myMap = {};

    /// string size
    int n = s.size();

    /// find character count in string
    for (int i = 0; i < n; i++) {
        myMap[s[i]]++;
    }


    /// if character count is 1 then it is unique and return the first one [index]
    for (int i = 0; i < n; i++) {
        if (myMap[s[i]] == 1) {
            return i;
        }
    }
    /// if string has not found any  unique character then return 1
    return -1;
}


int main() {

    string input = "codingminutes";
//    string input = "aabb";
    int index = firstUniqChar(input);
    cout << "first unique character index is -> " << index << "\n";

}