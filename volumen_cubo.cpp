#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int lado;

    cin >> lado;

    cout << fixed << setprecision(0) << pow(lado, 3) << endl;
    return 0;
}
