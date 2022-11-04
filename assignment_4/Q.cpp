#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, j;
    int x;
    int y = 1;

    cin >> x;

    int dop = x;
    int b = x;

    for (j = 1; j <= dop; j++)
    {
        for (i = 1; i <= x-1; i++)
        {
            cout << ".";
        }
        x--;

        for (i = 1; i <= y; i++)
        {
            cout << "*";
        }
        y += 2;

        for (i = 1; i <= b - 1; i++)
        {
            cout << ".";
        }
        b--;
        

        cout << endl;
    }
    
    return 0;
}
