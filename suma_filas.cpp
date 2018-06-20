#include <iostream>

using namespace std;

int main() {
    unsigned int cantFilas, cantColumnas;
    cin >> cantFilas;
    cin >> cantColumnas;

    unsigned int matriz[cantFilas][cantColumnas];

    // Leo la matriz
    for (unsigned int i=0; i<cantFilas; i++){
        for (unsigned int j=0; j<cantColumnas; j++){
            cin >> matriz[i][j];
        }
    }

    unsigned int sumaFila;
    for (unsigned int i=0; i<cantFilas; i++){
        sumaFila = 0;
        for (unsigned int j=0; j<cantColumnas; j++){
            sumaFila += matriz[i][j];
        }

        if (i==0)
            cout << sumaFila;
        else
            cout << " " << sumaFila;
    }
    cout << endl;

    unsigned int sumaColumna;
    for (unsigned int i=0; i<cantColumnas; i++){
        sumaColumna = 0;
        for (unsigned int j=0; j<cantFilas; j++){
            sumaColumna += matriz[j][i];
        }
        if (i==0)
            cout << sumaColumna;
        else
            cout << " " << sumaColumna;
    }

    return 0;
}
