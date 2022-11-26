#include <iostream>
using namespace std;
int main()
{
    int size;
    int array[size];
    cin >> size;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> array[i];
    }
    int max = 0;
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i + 1 ; j < size ; j++)
        {
            if(array[i] * array[j] > max)
            {
                max = array[i] * array[j];
            }
        }
    }
    cout << max;
}