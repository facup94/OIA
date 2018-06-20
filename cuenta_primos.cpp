#include <iostream>

using namespace std;

int main() {
    unsigned int cantNros, cantSumaprimo=0, suma;
    bool esPrimo;
    cin >> cantNros;

    unsigned int numeros[cantNros];

    for (unsigned int i=0; i<cantNros; i++) {
        cin >> numeros[i];
    }

    for (unsigned int i=0; i<cantNros-1; i++) {
        for (unsigned int j=i+1; j<cantNros; j++) {
            suma = numeros[i] + numeros[j];

            esPrimo = true;

            for (unsigned int k=2; k<suma; k++) {
                if (suma%k==0) {
                    esPrimo = false;
                    break;
                }
            }

            if (esPrimo)
                cantSumaprimo++;
        }
    }

    cout << cantSumaprimo << endl;

    return 0;
}
