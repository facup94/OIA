#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    unsigned int numeros[3];
    cin >> numeros[0];
    cin >> numeros[1];
    cin >> numeros[2];

    sort(numeros, numeros+3);

    cout << numeros[0] << " " << numeros[1] << " " << numeros[2] << endl;

    return 0;
}

