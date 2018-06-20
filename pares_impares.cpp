#include <iostream>

using namespace std;

int main() {
    unsigned int numero, pares=0, impares=0;
    int resta;
    cin >> numero;

    for (int i=1; i<=numero; i++) {
        if (i%2==0) {
            pares += i;
        } else {
            impares += i;
        }
    }

    resta = pares - impares;
    cout << resta << endl;

    return 0;
}

