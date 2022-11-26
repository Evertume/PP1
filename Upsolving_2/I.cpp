#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size][size];
    int max[size] = {0};
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            cin >> array[i][j];
        }
        for(int j = 0 ; j < size ; j++)
        {
            if(array[i][j] > max[i])
            {
                max[i] = array[i][j];
            }
        }
    }
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            array[i][j] = max[i];
        }
    }
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}