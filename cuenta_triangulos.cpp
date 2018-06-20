#include <iostream>

using namespace std;

int main() {
    unsigned int cantNumeros, cantTriangulos=0;
    cin >> cantNumeros;
    unsigned int valores[cantNumeros];

    for (unsigned int i=0; i<cantNumeros; i++)
        cin >> valores[i];

    for (unsigned int i=0; i<cantNumeros-2; i++) {
        for (unsigned int j=i+1; j<cantNumeros-1; j++) {
            for (unsigned int k=j+1; k<cantNumeros; k++) {
                if (valores[i] + valores[j] > valores[k] &&
                    valores[k] + valores[i] > valores[j] &&
                    valores[j] + valores[k] > valores[i]) {
                        cantTriangulos++;
                }
            }
        }
    }

    cout << cantTriangulos << endl;

    return 0;
}
