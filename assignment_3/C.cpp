#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int i, n;
    cin >> n;
    long arr[n];
    for (int i = 0; i <n; i++)
    {
       cin >> arr[i];
    }
    for (int i = 0; i <n; i++)
    {
       if(arr[0] < arr[i]){
        arr[0] = arr[i];
        
       }
    }
    cout << arr[0];
    return 0;
}