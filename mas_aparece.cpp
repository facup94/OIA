#include <iostream>

using namespace std;

int main() {
    unsigned int cantidad, numero, repMax=0, valorRepMax=1;

    cin >> cantidad;

    unsigned int repeticiones[99];

    for (int i=0; i<99; i++) {
        repeticiones[i] = 0;
    }

    for (int i=0; i<cantidad; i++) {
        cin >> numero;
        repeticiones[numero-1]++;
    }

    for (int i=0; i<99; i++) {
        if (repeticiones[i] > repMax) {
            repMax = repeticiones[i];
            valorRepMax = i+1;
        }
    }

    cout << valorRepMax << " " << repMax << endl;

    return 0;
}
