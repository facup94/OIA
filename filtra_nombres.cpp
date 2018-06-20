#include <iostream>
#include <vector>

using namespace std;

int main() {
    //int('A') 65
    //int('Z') 90
    //int('a') 97
    //int('z') 122
    unsigned int cantidad;
    cin >> cantidad;

    char nombre[15], ultimaLetra, letraConversion;
    vector<std::string> nombres;

    for (int i=0; i<cantidad; i++) {
        cin >> nombre;

        //Obtengo la ultima letra
        for (int j=0; j<15; j++) {
            if (nombre[j] > 64 && nombre[j] < 91) {
                nombre[j] = nombre[j] + 32;
            }
            if (nombre[j] == '\0') {
                break;
            }
            ultimaLetra = nombre[j];
        }

        if (nombre[0] == ultimaLetra) {
            for (int j=0; j<15; j++) {
                if (nombre[j] == '\0') {
                    break;
                }
            }
            nombres.push_back(string(nombre));
        }
    }

    for (std::vector<string>::iterator it = nombres.begin(); it != nombres.end(); it++)
		cout << *it << endl;

    return 0;
}
