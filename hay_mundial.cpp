#include <iostream>

using namespace std;

int main() {
    unsigned int anio;
    cin >> anio;

    if ((anio-2018)%4 == 0) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
