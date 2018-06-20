#include <iostream>

using namespace std;

int main() {
    unsigned int cantidad, suma, cuantos=0;
    cin >> cantidad;

    unsigned int numeros[cantidad];
    for (unsigned int i=0; i<cantidad; i++) {
        cin >>numeros[i];
    }

    for (unsigned int i=0; i<cantidad-1; i++) {
        for (unsigned int j=i+1; j<cantidad; j++) {
            suma = numeros[i] + numeros [j];
            if (suma%10==0) {
                cuantos++;
            }
        }
    }

    cout << cuantos << endl;

    return 0;
}
