#include <iostream>

using namespace std;

int main () {
    unsigned int maximo;
    bool esPrimo;
    cin >> maximo;

    for (unsigned int i=2; i<=maximo; i++) {
        esPrimo = true;
        for (unsigned int j=2; j<i; j++) {
            if (i%j==0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            cout << i << endl;
        }
    }

    return 0;
}
