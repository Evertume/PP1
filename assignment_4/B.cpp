#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int z1 = 1;
    int z2 = 0;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (arr[i][j] > z1)
                z1 = arr[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            if (arr[i][j] > z2 && arr[i][j] < z1)
                z2 = arr[i][j];
        }

    cout << z2;
    return 0;
}
