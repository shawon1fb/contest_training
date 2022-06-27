#include <bits/stdc++.h>

using namespace std;


void findSubStrings(char *input, char *output, int i, int j) {

    if (input[i] == '\0') {
        output[j] = '\0';
        cout << output << endl;
        if (output[0] == '\0') {
            cout << "NULL" << endl;
        }
        return;
    }


    output[j] = input[i];
    findSubStrings(input, output, i + 1, j + 1);
    findSubStrings(input, output, i + 1, j);

}


int main() {

    char input[100];
    char output[100];
    cin >> input;
    findSubStrings(input, output, 0, 0);


}