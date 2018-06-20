#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra1;
    string palabra2;

    getline(cin, palabra1, ' ');
    getline(cin, palabra2);

    if (palabra1.compare(palabra2) == 0) {
        cout << "IGUALES" << endl;
    } else if (palabra1.compare(palabra2) < 0) {
        cout << "LA PRIMERA" << endl;
    } else {
        cout << "LA SEGUNDA" << endl;
    }
    return 0;
}
