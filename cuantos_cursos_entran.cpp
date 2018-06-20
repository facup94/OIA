#include <iostream>

using namespace std;

int main()
{
    unsigned int asientos, alumnos, cursos;

    cin >> asientos;
    cin >> alumnos;

    cursos = asientos / alumnos;
    cout << cursos << endl;
    return 0;
}
