#include <iostream>
#include <list>

using namespace std;

int main() {
    /* Obviamente deberia usar un mapa y ademas cortar apenas se repite uno */
    unsigned int num;
    bool hayRepetidos = false;
    list<unsigned int> numeros;

    cin >> num;
    while (num) {
        numeros.push_back(num);
        cin >> num;
    }

    for (list<unsigned int>::iterator i = numeros.begin(); i != numeros.end(); ++i) {
        for (list<unsigned int>::iterator j = i; ++j != numeros.end(); ) {
            if (*i == *j) {
                hayRepetidos = true;
                break;
            }
        }
    }

    if (hayRepetidos)
        cout << "Hay repetidos" << endl;
    else
        cout << "No hay repetidos" << endl;

    return 0;
}
