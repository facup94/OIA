#include <iostream>

using namespace std;

int main()
{
    unsigned int ascenso, descenso, dias;

    cin >> ascenso;
    cin >> descenso;
    cin >> dias;


    cout << (ascenso - descenso) * dias << endl;
    return 0;
}
