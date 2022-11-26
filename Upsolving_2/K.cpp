#include <iostream> 
#include <string> 
using namespace std; 
 
int main() 
{ 
    int n, l, k=0; 
    cin >> n; 
    int arr[2][n]; 
    for (int i=0; i<2; i++){ 
        for (int g=0; g<n; g++){ 
            cin >> arr[i][g]; 
        } 
    } 
    cin >> l; 
        for (int i=0; i<n; i++){ 
             if(arr[0][i]<=l && arr[1][i]>=l){ 
                k++; 
             } 
        } 
    cout << k; 
}
