#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;
    cin >> palabra;

    string asteriscos = "";
    for (int i=0; i<palabra.size()+2; i++) {
        asteriscos = asteriscos + "*";
    }
    cout << asteriscos << endl;
    cout << "*" << palabra << "*" << endl;
    cout << asteriscos << endl;

    return 0;
}
