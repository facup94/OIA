#include <iostream>
#include <algorithm>

using namespace std;

int main() {/*
    string str;
    cin >> str;

    reverse(str.begin(), str.end());

    cout << str;
*/
    char palabra[100];
    cin >> palabra;

    unsigned int endPos = 0;
    for (int i=0; i<100; i++) {
        if (palabra[i] == '\0') {
            endPos = i;
            break;
        }
    }

    for (int i=0; i<endPos/2; i++) {
        swap(palabra[i], palabra[endPos-1-i]);
    }

    cout << palabra;
    return 0;
}

