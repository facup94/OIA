#include <iostream>

using namespace std;

int main()
{
    unsigned int caramelos, invitados;

    cin >> caramelos;
    cin >> invitados;

    cout << "Invitado: " << caramelos/invitados << endl;
    cout << "Carlitos: " << caramelos%invitados << endl;
    return 0;
}
