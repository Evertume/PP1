#include <iostream>
#include <algorithm>

using namespace std;

void transpose(int n, int m){
    int arr[n][m];
    for(int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j)
        cin >> arr[i][j];
    }
    for(int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
        cout << arr[j][i] << " ";
    }
    cout << endl;
    }
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    int arr[n][m];
    transpose(n, m);
}