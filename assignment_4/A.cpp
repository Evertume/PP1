#include <iostream>
using namespace std;

int main()
{
    int n;
    float arr[100][100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[0][0] < arr[i][j]) {
                arr[0][0] = arr[i][j];
            }               
        }  
    }

    cout << arr[0][0];
}
