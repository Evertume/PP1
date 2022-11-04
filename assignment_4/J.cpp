#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[100][100];
    int n, m, dop;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if ((i + j) % 2 == 0) {
                arr[i][j]++;
            }
            else arr[i][j]--;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}