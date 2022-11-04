#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int n, m, num = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (arr[i][j] < 0)
                num++;

    cout << num;
    return 0;
}