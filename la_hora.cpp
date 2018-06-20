#include <iostream>

using namespace std;

int main() {
    char horastr[5];
    cin >> horastr;

    unsigned int horas = 0;
    horas = horas + (horastr[0] - '0') * 10;
    horas = horas + (horastr[1] - '0');

    if (horas == 0 || horas == 12) {
        horas += 12;
    }
    if (horas <= 12) {
        if (horas < 10) {
            cout << '0' << horas << horastr[2] << horastr[3] << horastr[4] << " AM" << endl;
        } else {
            cout << horas << horastr[2] << horastr[3] << horastr[4] << " AM" << endl;
        }
    } else {
        if (horas < 22) {
            cout << '0' << (horas-12) << horastr[2] << horastr[3] << horastr[4] << " PM" << endl;
        } else {
            cout << (horas-12) << horastr[2] << horastr[3] << horastr[4] << " PM" << endl;
        }
    }
    return 0;
}

