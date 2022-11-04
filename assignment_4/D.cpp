#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        arr[i][0] = i;
    }
    for (int i = 0; i < n; i++) {
        arr[0][i] = i;
    }

    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; ++j)
            arr[i][j] = i * j;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
