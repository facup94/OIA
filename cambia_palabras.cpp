#include <iostream>

using namespace std;

int main()
{
    char palabra[100];
    unsigned int letra;

    cin >> palabra;
    cin >> letra;

    palabra[letra-1] = 'X';

    cout << palabra << endl;

    return 0;
}
