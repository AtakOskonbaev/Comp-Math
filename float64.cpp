#include <iostream>
using namespace std;

int main() 
{
    long double epsf = 1;

    while (1 + epsf != 1)
    { 
        epsf /= 10;
        cout << epsf << endl;
    }
    cout << endl;

}

