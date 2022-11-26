#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size][size];
    for(int i = 0 ; i < size ; i++)
    {
        for (int j = 0 ; j < size ; j++)
        {
            cin >> array[i][j];
        }
    }
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            if(array[i][j] != array[j][i])
            {
                cout << "Not perfect.";
                return 0;
            }
        }
    }
    cout << "Perfect.";
}