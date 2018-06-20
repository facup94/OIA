#include <iostream>

using namespace std;

int main()
{
    int numero;
    cin >> numero;

    if (numero%3 == 0) {
        cout << "ES MULTIPLO" << endl;
    } else {
        cout << "NO ES MULTIPLO" << endl;
    }
    return 0;
}
