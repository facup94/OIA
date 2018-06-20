#include <iostream>

using namespace std;

int main() {
    unsigned int hora,minuto,segundo,duracion;

    cin >> hora;
    cin >> minuto;
    cin >> segundo;
    cin >> duracion;

    segundo += duracion;

    while (segundo >= 60) {
        segundo -= 60;
        minuto++;
    }

    while (minuto >= 60) {
        minuto -= 60;
        hora++;
    }

    while (hora >= 24) {
        hora -= 24;
    }

    cout << hora << " " << minuto << " " << segundo << endl;

    return 0;
}
