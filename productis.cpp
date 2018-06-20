#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned int A,B;
    cin >> A;
    cin >> B;

    string preA, preB, preC;
    if (A<10) {
        preA = "   ";
    } else {
        preA = "  ";
    }

    if (B<10) {
        preB = "x  ";
    } else {
        preB = "x ";
    }

    if(A*B>=1000) {
        preC = "";
    } else if (A*B>=100) {
        preC = " ";
    } else if (A*B>=10) {
        preC = "  ";
    } else {
        preC = "   ";
    }

    cout << preA << A << endl;
    cout << preB << B << endl;
    cout << "----" << endl;
    cout << preC << A*B << endl;
    return 0;
}


