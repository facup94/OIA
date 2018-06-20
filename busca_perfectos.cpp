#include <iostream>

using namespace std;

int main () {
    unsigned int numero, sumaDivisores;
    cin >> numero;

    for (int i=1; i<=numero; i++) {
        sumaDivisores = 0;
        for (int j=1; j<i; j++) {
            if (i%j==0) {
                sumaDivisores += j;
            }
        }
        if (i == sumaDivisores) {
            cout << i <<endl;
        }
    }

    return 0;
}
