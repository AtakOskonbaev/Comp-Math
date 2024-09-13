#include <iostream>
using namespace std;
int main() 
{
    float epsf = 1;
    while (1 + epsf != 1)
    {
        epsf /= 10;  
    }
    epsf * 10;
    cout << epsf << endl;

    double epsd = 1;
    while (1 + epsd != 1)
    {
        epsd /= 10;  
    }
    epsd * 10;
    cout << epsd;
}