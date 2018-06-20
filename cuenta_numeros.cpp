#include <iostream>

using namespace std;

int main() {
    unsigned int cantidad[10], cuantos, numero;

    for (int i=0; i<10; i++) {
        cantidad[i] = 0;
    }

    cin >> cuantos;

    for (unsigned int i=0; i<cuantos; i++) {
        cin >> numero;
        if (numero > 10 || numero == 0) {
            continue;
        }
        cantidad[numero-1]++;
    }

    for (int i=0; i<10; i++) {
        cout << cantidad[i] << endl;
    }

    return 0;
}
