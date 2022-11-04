#include <iostream>
using namespace std;

int main(){

    int a, b, sum = 0; 
    cin >> a >> b;
    int arr[a][b];

    for(int i = 0; i < a; i ++){
        for(int j = 0; j < b; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < a; i ++){
        sum = 0;
        for(int j = 0; j < b; j++){
            sum += arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum << endl;
    }

    for(int i = 0; i < b; i ++){
        sum = 0;
        for(int j = 0; j < a; j++){
            sum += arr[j][i];
        }
        cout << "The sum of column number " << i + 1 << " is " << sum << endl;
    }

}