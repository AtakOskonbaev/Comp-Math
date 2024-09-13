#include <iostream>
using namespace std;

int main()
{
    float z = 1;
    int n = 0;

    while (2 * z > z)
    {
        n++;
        z = z / 10;
        cout << n << " " << z << endl;
    }
}