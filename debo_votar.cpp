#include <iostream>

using namespace std;

int main() {
    unsigned int edad;
    cin >> edad;
    if (edad >= 18 && edad <= 69 ) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
