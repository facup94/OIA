#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    unsigned int cantNombres, maxLargoNombre=0, maxRepeticionNombre=0;
    string nombre, nombreLargo, nombreRepetido;
    map <string, int> mapa;


    cin >> cantNombres;

    for (unsigned int i=0; i<cantNombres; i++) {
        cin >> nombre;

        if (mapa.count(nombre) == 0)
            mapa.insert(pair <string, int> (nombre, 1));
        else
            mapa[nombre]++;

        if (nombre.length() > maxLargoNombre) {
            maxLargoNombre = nombre.length();
            nombreLargo = nombre;
        }
    }

    cout << nombreLargo << endl;

    for (map<string,int>::iterator it=mapa.begin(); it!=mapa.end(); ++it) {
        if (it->second > maxRepeticionNombre) {
            maxRepeticionNombre = it->second;
            nombreRepetido = it->first;
        }
    }

    cout << nombreRepetido << endl;

    return 0;
}
