#include <iostream>

using namespace std;

int main() {
    unsigned int anio;
    cin >> anio;

    if (anio%100 == 0 && anio%400 == 0) {
        cout << "SI" << endl;
    } else if (anio%100 != 0 && anio%4 == 0) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
