#include <iostream>
#include <string>

using namespace std;

int main() {
    string figura;
    unsigned int lado1, lado2, lado3;

    getline(cin, figura);

    if (figura == "cuadrado") {
        cin >> lado1;
        cout << lado1 * lado1 << endl;
    } else if (figura == "rectangulo") {
        cin >> lado1;
        cin >> lado2;
        cout << lado1 * lado2 << endl;
    } else if (figura == "cubo") {
        cin >> lado1;
        cout << lado1 * lado1 * 6 << endl;
    } else if (figura == "caja") {
        cin >> lado1;
        cin >> lado2;
        cin >> lado3;

        cout << (lado1 * lado2 * 2) + (lado1 * lado3 * 2) + (lado2 * lado3 * 2) << endl;
    }

    return 0;
}
