#include <iostream>
using namespace std;

int main()
{
    double inf = 1;
    int n = 0;
    
    while(2 * inf > inf)
    {
        n++;
		inf = inf * 10;
		cout << n << " " << inf << endl;
    }
}