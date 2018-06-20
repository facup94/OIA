#include <iostream>

using namespace std;

int main () {
    unsigned int cantidad, maximo=0, minimo=0, suma=0;
    cin >> cantidad;

    unsigned int numeros[cantidad];
    for (int i=0; i<cantidad; i++) {
        cin >> numeros[i];

        if (i==0) {
            minimo = numeros[i];
        }

        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }

        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }

        suma += numeros[i];
    }

    cout << maximo << endl;
    cout << minimo << endl;
    cout << suma << endl;

    return 0;
}
